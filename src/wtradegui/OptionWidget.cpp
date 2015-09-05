#include "wtradegui/OptionWidget.h"
#include "wtradegui/OptionTreeWidget.h"
#include "wtradegui/EmptyOptionWidget.h"
#include "wtradegui/DatabaseOptionWidget.h"
#include "wtradegui/Strings.h"
#include "wlogger/SingletonLogger.h"
#include <QGridLayout>

namespace WTradeGui {

///////////////////////////////////////////////////////////////////////////////
// USING SECTION                                                             //
///////////////////////////////////////////////////////////////////////////////

using WLogger::SingletonLogger;
using WLogger::Logger;

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

OptionWidget::OptionWidget(QWidget *parent) :
	QDialog(parent),
	m_okButton(new QPushButton(this)),
	m_applyButton(new QPushButton(this)),
	m_closeButton(new QPushButton(this)),
	m_optionTree(new OptionTreeWidget(this)),
	m_layout(new QGridLayout(this)),
	m_widgets(new QStackedWidget(this)) {
	m_okButton->setText(Button::Ok);
	m_applyButton->setText(Button::Apply);
	m_closeButton->setText(Button::Close);
	EmptyOptionWidget *emptyWidget(new EmptyOptionWidget(this));
	DatabaseOptionWidget *databaseWidget(new DatabaseOptionWidget(this));
	emptyWidget->setFixedSize(400, 300);
	m_widgets->addWidget(emptyWidget);
	m_databaseConnectionIndex = m_widgets->addWidget(databaseWidget);
	m_layout->addWidget(m_optionTree, 0, 0, 1, 1);
	m_layout->addWidget(m_widgets, 0, 1, 1, 4);
	m_layout->addWidget(m_okButton, 1, 2, 1, 1);
	m_layout->addWidget(m_applyButton, 1, 3, 1, 1);
	m_layout->addWidget(m_closeButton, 1, 4, 1, 1);
	setLayout(m_layout);
	connect(m_optionTree, &OptionTreeWidget::itemSelected, this, &OptionWidget::selectWidget);
	SingletonLogger::instance().write(Logger::TRACE, Log::OptionWidgetCreated);
}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SLOTS SECTION                                                     //
///////////////////////////////////////////////////////////////////////////////

void OptionWidget::selectWidget(const QString &item, const QString &subItem) {
	SingletonLogger::instance().write(Logger::TRACE, Log::OptionWidgetItemSelected + item);
	SingletonLogger::instance().write(Logger::TRACE, Log::OptionWidgetSubItemSelected + subItem);
	if (item == Label::Database) {
		if (subItem == Label::Connection) {
			m_widgets->setCurrentIndex(m_databaseConnectionIndex);
		}
	}
}

} // namespace WTradeGui

