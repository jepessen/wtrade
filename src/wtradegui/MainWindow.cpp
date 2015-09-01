#include "wtradegui/MainWindow.h"

namespace WTradeGui {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

MainWindow::MainWindow(QWidget *parent) :
		QMainWindow(parent),
		m_menuBar(new MenuBar(this)) {
		setMenuBar(m_menuBar);
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

} // namespace WTradeGui
