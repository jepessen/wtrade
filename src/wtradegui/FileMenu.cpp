#include "wtradegui/FileMenu.h"
#include "wtradegui/Strings.h"

namespace WTradeGui {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

FileMenu::FileMenu(QWidget *parent) :
		QMenu(parent) {
		setTitle(Menu::FileName);
		addAction(Action::NewName);
		addAction(Action::OpenName);
		addAction(Action::SaveName);
		addAction(Action::SaveAsName);
		addAction(Action::CloseName);
		addSeparator();
		addAction(Action::PrintReportName);
		addSeparator();
		addAction(Action::QuitName);
}

} // namespace WTradeGui
