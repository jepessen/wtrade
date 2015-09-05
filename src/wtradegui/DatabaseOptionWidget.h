#ifndef WTRADEGUI_DATABASEOPTIONWIDGET_H_
#define WTRADEGUI_DATABASEOPTIONWIDGET_H_

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QGridLayout>
#include <QComboBox>

namespace WTradeGui {

class DatabaseOptionWidget : public QWidget {

	Q_OBJECT

public:

	explicit DatabaseOptionWidget(QWidget *parent = 0);
	virtual ~DatabaseOptionWidget() = default;

private:

	QLabel *m_userLabel;
	QLabel *m_passwordLabel;
	QLabel *m_databasesLabel;
	QLineEdit *m_userLineEdit;
	QLineEdit *m_passwordLineEdit;
	QComboBox *m_databases;
	QGridLayout *m_layout;
};

} // namespace WTradeGui

#endif // !WTRADEGUI_DATABASEOPTIONWIDGET_H_
