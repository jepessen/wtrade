#ifndef WTRADEGUI_LOGGERWIDGET_H_
#define WTRADEGUI_LOGGERWIDGET_H_

#include "wtradegui/wtradegui_global.h"
#include <QDockWidget>
#include <QGridLayout>
#include <QDateTime>

namespace WTradeGui {

class LoggerLevelWidget;
class LoggerListWidget;

class WTRADEGUISHARED_EXPORT LoggerWidget : public QDockWidget {

	Q_OBJECT

public:

	explicit LoggerWidget(QWidget *parent = 0);
	virtual ~LoggerWidget() = default;

public slots:

	void addRow(const QDateTime &timeStamp, const LogLevel &level, const QString &message);

private:

	LoggerLevelWidget *m_loggerLevel;
	LoggerListWidget *m_loggerList;
	QGridLayout *m_layout;

};

} // namespace WTradeGui

#endif // !WTRADEGUI_LOGGERWIDGET_H_
