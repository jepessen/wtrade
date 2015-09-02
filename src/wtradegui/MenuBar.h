#ifndef WTRADEGUI_MENUBAR_H
#define WTRADEGUI_MENUBAR_H

#include <QMenuBar>
#include <QVector>
#include <QMenu>

namespace WTradeGui {

class FileMenu;
class ToolsMenu;

class MenuBar : public QMenuBar
{
	Q_OBJECT

public:

	MenuBar(QWidget *parent = 0);
	QVector<QMenu*> getMenuList() const;

private:

	FileMenu *m_fileMenu;
	ToolsMenu *m_toolsMenu;
};

} // namespace WTradeGui

#endif // WTRADEGUI_MENUBAR_H
