#include "wtradegui/MenuBar.h"
#include "wtradegui/FileMenu.h"
#include "wtradegui/ToolsMenu.h"

namespace WTradeGui {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

MenuBar::MenuBar(QWidget *parent) :
	QMenuBar(parent),
	m_fileMenu(new FileMenu(this)),
	m_toolsMenu(new ToolsMenu(this)) {
	addMenu(m_fileMenu);
	addMenu(m_toolsMenu);
}

QVector<QMenu*> MenuBar::getMenuList() const {
	QVector<QMenu*> menuList;
	menuList << m_fileMenu << m_toolsMenu;
	return menuList;
}

} // namespace WTradeGui
