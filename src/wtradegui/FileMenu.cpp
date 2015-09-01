#include "wtradegui/FileMenu.h"

namespace WTradeGui {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

FileMenu::FileMenu(QWidget *parent) :
		QMenu(parent) {
		setTitle(tr("&File"));
		addAction(tr("&New..."));
		addAction(tr("&Open..."));
		addAction(tr("&Save"));
		addAction(tr("Save &As..."));
		addAction(tr("&Close..."));
		addSeparator();
		addAction(tr("&Print report..."));
		addAction(tr("&Quit"));
}

} // namespace WTradeGui
