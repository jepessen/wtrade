#ifndef WTRADEGUI_OPTIONTREEWIDGET_H_
#define WTRADEGUI_OPTIONTREEWIDGET_H_

#include <QTreeWidget>

namespace WTradeGui {

class OptionTreeWidget : public QWidget {

Q_OBJECT

public:

	explicit OptionTreeWidget(QWidget *parent = 0);
	virtual ~OptionTreeWidget() = default;

signals:

	void itemSelected(const QString &item, const QString &subItem);

private:

	QTreeWidget *m_tree;
};

} // namespace WTradeGui

#endif // !WTRADEGUI_OPTIONTREEWIDGET_H_
