#include "wtradegui/MenuBar.h"
#include "wtradegui/FileMenu.h"

namespace WTradeGui {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

MenuBar::MenuBar(QWidget *parent) :
		QMenuBar(parent),
		m_fileMenu(new FileMenu(this)) {
		addMenu(m_fileMenu);
}

} // namespace WTradeGui
