#include "wtrade/Application.h"
#include "wtrade/Options.h"
#include "wtradegui/MainWindow.h"
#include "wtradegui/MenuAction.h"
#include "wtradegui/Strings.h"

namespace WTrade {

///////////////////////////////////////////////////////////////////////////////
// USING SECTION                                                             //
///////////////////////////////////////////////////////////////////////////////

using WTradeGui::MainWindow;
using WTradeGui::MenuAction;

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

Application::Application(QObject *parent) :
	QObject(parent),
	m_mainWindow(new MainWindow()) {
	createMainWindowConnections();
}

void Application::showMainWindow() {
	m_mainWindow->show();
}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SLOTS SECTION                                                     //
///////////////////////////////////////////////////////////////////////////////

void Application::executeMenuAction(const MenuAction &action) {
	const QString menu = action.getMenuName();
	if (menu == WTradeGui::Menu::FileName) {
		executeFileAction(action.getActionName());
	} else if (menu == WTradeGui::Menu::ToolsName) {
		executeToolsAction(action.getActionName());
	}
}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SECTION                                                           //
///////////////////////////////////////////////////////////////////////////////

void Application::createMainWindowConnections() {
	connect(m_mainWindow, &MainWindow::menuActionSelected, this, &Application::executeMenuAction);
}

void Application::executeFileAction(const QString &action) {

}

void Application::executeToolsAction(const QString &action) {
	if (action == WTradeGui::Action::OptionsName) {
		Options options;
		options.showWindow(m_mainWindow);
	}
}

} // namespace WTrade

