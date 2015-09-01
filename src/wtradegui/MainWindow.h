#ifndef WTRADEGUI_MAINWINDOW_H_
#define WTRADEGUI_MAINWINDOW_H_

#include "wtradegui/wtradegui_global.h"
#include "wtradegui/MenuBar.h"
#include <QMainWindow>

namespace WTradeGui {

class WTRADEGUISHARED_EXPORT MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);

signals:

	void windowIsShown();

protected:

	virtual void showEvent(QShowEvent* event);

private:

    MenuBar *m_menuBar;
};

} // namespace WTradeGui

#endif // WTRADEGUI_MAINWINDOW_H_
