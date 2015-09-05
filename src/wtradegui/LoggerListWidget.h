#ifndef WTRADEGUI_LOGGERLISTWIDGET_H_
#define WTRADEGUI_LOGGERLISTWIDGET_H_

#include "wtradegui/wtradegui_global.h"
#include <QTableWidget>
#include <QString>

namespace WTradeGui {

class LoggerListWidget : public QTableWidget {

	Q_OBJECT

public:

	explicit LoggerListWidget(QWidget *parent = 0);
	virtual ~LoggerListWidget() = default;

public slots:

	void addRow(const QDateTime &timeStamp, const LogLevel &level, const QString &message);

private:

	QString getLevelString(const LogLevel &level);
};

} // namespace WTradeGui

#endif // !WTRADEGUI_LOGGERLISTWIDGET_H_
