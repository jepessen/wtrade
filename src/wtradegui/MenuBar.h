#ifndef WTRADEGUI_MENUBAR_H
#define WTRADEGUI_MENUBAR_H

#include <QMenuBar>
#include <QMenu>

namespace WTradeGui {

class MenuBar : public QMenuBar
{
public:
		MenuBar(QWidget *parent = 0);

private:

		QMenu *m_fileMenu;
};

} // namespace WTradeGui

#endif // WTRADEGUI_MENUBAR_H
