#include "wtradegui/LoggerWidget.h"
#include "wtradegui/Strings.h"
#include "wtradegui/LoggerLevelWidget.h"
#include "wtradegui/LoggerListWidget.h"

namespace WTradeGui {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

LoggerWidget::LoggerWidget(QWidget *parent) :
	QDockWidget(parent),
	m_loggerLevel(new LoggerLevelWidget(this)),
	m_loggerList(new LoggerListWidget(this)),
	m_layout(new QGridLayout(this))
{
	setWindowTitle(Label::Logger);
	m_layout->addWidget(m_loggerLevel, 0, 0, 1, 1);
	m_layout->addWidget(m_loggerList, 1, 0, 1, 5);
	QWidget *widget(new QWidget(this));
	widget->setLayout(m_layout);
	setWidget(widget);
}

} // namespace WTradeGui
