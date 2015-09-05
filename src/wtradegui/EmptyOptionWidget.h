#ifndef WTRADEGUI_EMPTYOPTIONWIDGET_H_
#define WTRADEGUI_EMPTYOPTIONWIDGET_H_

#include <QWidget>
#include <QLabel>

namespace WTradeGui {

class EmptyOptionWidget : public QWidget {

	Q_OBJECT

public:

	explicit EmptyOptionWidget(QWidget *parent = 0);
	virtual ~EmptyOptionWidget() = default;
};

} // namespace WTradeGui

#endif // !WTRADEGUI_EMPTYOPTIONWIDGET_H_
