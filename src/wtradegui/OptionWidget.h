#ifndef WTRADEGUI_OPTIONWIDGET_H_
#define WTRADEGUI_OPTIONWIDGET_H_

#include "wtradegui/wtradegui_global.h"
#include <QDialog>

namespace WTradeGui {

class WTRADEGUISHARED_EXPORT OptionWidget : public QDialog {

	Q_OBJECT

public:

	OptionWidget(QWidget *parent = 0);
	virtual ~OptionWidget() = default;
};

} // namespace WTradeGui

#endif // !WTRADEGUI_OPTIONWIDGET_H_

