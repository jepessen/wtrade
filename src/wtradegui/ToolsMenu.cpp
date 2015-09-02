#include "wtradegui/ToolsMenu.h"
#include "wtradegui/Strings.h"

namespace WTradeGui {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

ToolsMenu::ToolsMenu(QWidget *parent) :
	QMenu(parent) {
	setTitle(Menu::ToolsName);
	addAction(Action::OptionsName);
}

} // namespace WTradeGui

