#ifndef WLOGGER_LOGGER_H_
#define WLOGGER_LOGGER_H_

#include "wlogger/wlogger_global.h"
#include <string>
#include <QString>

namespace WLogger {

class WLOGGERSHARED_EXPORT Logger {

public:

	typedef enum {
		TRACE,
		DEBUG,
		INFO,
		WARNING,
		ERROR,
		FATAL
	} Level;

public:

	Logger() = default;
	virtual ~Logger() = default;
	void write(const Level &level, const std::string &message);
	void write(const Level &level, const std::wstring &message);
	void write(const Level &level, const QString &message);
};

} // namespace WLogger

#endif // !WLOGGER_LOGGER_H_
