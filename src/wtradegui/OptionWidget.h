#ifndef WTRADEGUI_OPTIONWIDGET_H_
#define WTRADEGUI_OPTIONWIDGET_H_

#include "wtradegui/wtradegui_global.h"
#include <QDialog>
#include <QGridLayout>
#include <QStackedWidget>
#include <QPushButton>

namespace WTradeGui {

class OptionTreeWidget;

class WTRADEGUISHARED_EXPORT OptionWidget : public QDialog {

	Q_OBJECT

public:

	OptionWidget(QWidget *parent = 0);
	virtual ~OptionWidget() = default;

private slots:

	void selectWidget(const QString &item, const QString &subItem);

private:

	QPushButton *m_okButton;
	QPushButton *m_applyButton;
	QPushButton *m_closeButton;
	OptionTreeWidget *m_optionTree;
	QGridLayout *m_layout;
	QStackedWidget *m_widgets;
	int m_databaseConnectionIndex;
};

} // namespace WTradeGui

#endif // !WTRADEGUI_OPTIONWIDGET_H_

