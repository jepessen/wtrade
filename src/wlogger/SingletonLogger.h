#ifndef WLOGGER_SINGLETONLOGGER_H_
#define WLOGGER_SINGLETONLOGGER_H_

#include "wlogger/wlogger_global.h"
#include "wlogger/Logger.h"
#include <QObject>
#include <memory>
#include <mutex>

namespace WLogger {

class Logger;

class WLOGGERSHARED_EXPORT SingletonLogger : public QObject {

	Q_OBJECT

public:

	static SingletonLogger &instance();

public:

	virtual ~SingletonLogger() = default;
	void write(const Logger::Level &level, const std::string &message);
	void write(const Logger::Level &level, const std::wstring &message);
	void write(const Logger::Level &level, const QString &message);

signals:

	void logAdded(const QDateTime &dateTime, const Logger::Level &level, const QString &message);

private:

	SingletonLogger();

private:

	static std::unique_ptr<SingletonLogger> m_instance;
	static std::once_flag m_onceFlag;
	static Logger m_logger;
};

} // namespace WLogger

#endif // !WLOGGER_SINGLETONLOGGER_H_
