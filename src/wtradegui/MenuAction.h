#ifndef WTRADEGUI_MENUACTION_H_
#define WTRADEGUI_MENUACTION_H_

#include "wtradegui/wtradegui_global.h"
#include <QMetaType>
#include <QString>

namespace WTradeGui {

class WTRADEGUISHARED_EXPORT MenuAction {

public:

	MenuAction() = default;
	MenuAction(const QString &menuName, const QString &actionName);
	virtual ~MenuAction() = default;
	void setMenuName(const QString &name);
	void setActionName(const QString &name);
	QString getMenuName() const;
	QString getActionName() const;

private:

	QString m_menuName;
	QString m_actionName;
};

} // namespace WTradeGui

Q_DECLARE_METATYPE(WTradeGui::MenuAction)

#endif // !WTRADEGUI_MENUACTION_H_
