#include "wtradegui/MenuAction.h"

namespace WTradeGui {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

MenuAction::MenuAction(const QString &menuName, const QString &actionName) :
	m_menuName(menuName),
	m_actionName(actionName) {
}

void MenuAction::setMenuName(const QString &name) {
	m_menuName = name;
}

void MenuAction::setActionName(const QString &name) {
	m_actionName = name;
}

QString MenuAction::getMenuName() const {
	return m_menuName;
}

QString MenuAction::getActionName() const {
	return m_actionName;
}

} // namesapce WTradeGui