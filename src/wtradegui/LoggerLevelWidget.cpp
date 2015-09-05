#include "wtradegui/LoggerLevelWidget.h"
#include "wtradegui/Strings.h"

namespace WTradeGui {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

LoggerLevelWidget::LoggerLevelWidget(QWidget *parent) :
	QWidget(parent),
	m_label(new QLabel(this)),
	m_levels(new QComboBox(this)),
	m_layout(new QHBoxLayout(this))
{
	m_label->setText(Label::Level + ":");
	m_levels->addItem(Label::Trace);
	m_levels->addItem(Label::Debug);
	m_levels->addItem(Label::Info);
	m_levels->addItem(Label::Warning);
	m_levels->addItem(Label::Error);
	m_levels->addItem(Label::Fatal);
	m_levels->setFixedWidth(100);
	m_layout->addWidget(m_label);
	m_layout->addWidget(m_levels);
	setLayout(m_layout);
}

} // namespace WTradeGui
