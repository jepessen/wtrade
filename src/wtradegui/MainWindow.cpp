#include "wtradegui/MainWindow.h"
#include "wtradegui/MenuBar.h"

namespace WTradeGui {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

MainWindow::MainWindow(QWidget *parent) :
		QMainWindow(parent),
		m_menuBar(new MenuBar(this)) {
		setMenuBar(m_menuBar);
		createMenuConnections();
}

///////////////////////////////////////////////////////////////////////////////
// PROTECTED SECTION                                                         //
///////////////////////////////////////////////////////////////////////////////

/**
 * The overriden method allows to emit the windowIsShown() signal when
 * the window is shown.
 *
 * @param event Show event.
 */
void MainWindow::showEvent(QShowEvent *event) {
	QMainWindow::showEvent(event);
	emit windowIsShown();
}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SECTION                                                           //
///////////////////////////////////////////////////////////////////////////////

void MainWindow::createMenuConnections() {
	const auto menuList = m_menuBar->getMenuList();
	for (const auto& it : menuList) {
		connect(it, QMenu::triggered, [=](const QAction* action) {
			emit menuActionSelected(MenuAction(it->title(), action->text()));
		});
	}
}

} // namespace WTradeGui
