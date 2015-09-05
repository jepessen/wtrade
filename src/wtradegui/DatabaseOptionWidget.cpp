#include "wtradegui/DatabaseOptionWidget.h"
#include "wtradegui/Strings.h"

namespace WTradeGui {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

DatabaseOptionWidget::DatabaseOptionWidget(QWidget *parent) :
	QWidget(parent),
	m_userLabel(new QLabel(this)),
	m_passwordLabel(new QLabel(this)),
	m_databasesLabel(new QLabel(this)),
	m_userLineEdit(new QLineEdit(this)),
	m_passwordLineEdit(new QLineEdit(this)),
	m_databases(new QComboBox(this)),
	m_layout(new QGridLayout(this))
{
	m_userLabel->setText(Label::User + ":");
	m_passwordLabel->setText(Label::Password + ":");
	m_databasesLabel->setText(Label::Database + ":");
	m_passwordLineEdit->setEchoMode(QLineEdit::Password);
	m_layout->addWidget(m_userLabel, 0, 0, 1, 1);
	m_layout->addWidget(m_passwordLabel, 1, 0, 1, 1);
	m_layout->addWidget(m_userLineEdit, 0, 1, 1, 1);
	m_layout->addWidget(m_passwordLineEdit, 1, 1, 1, 1);
	m_layout->addWidget(m_databasesLabel, 2, 0, 1, 1);
	m_layout->addWidget(m_databases, 2, 1, 1, 1);
	setLayout(m_layout);
}

} // namespace WTradeGui
