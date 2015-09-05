#ifndef WTRADEGUI_LOGGERLISTWIDGET_H_
#define WTRADEGUI_LOGGERLISTWIDGET_H_

#include <QTableView>

namespace WTradeGui {

class LoggerListWidget : public QTableView {

	Q_OBJECT

public:

	explicit LoggerListWidget(QWidget *parent = 0);
	virtual ~LoggerListWidget() = default;
};

} // namespace WTradeGui

#endif // !WTRADEGUI_LOGGERLISTWIDGET_H_
