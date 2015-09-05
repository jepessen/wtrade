#include "wlogger/SingletonLogger.h"
#include "wlogger/Logger.h"
#include <boost/log/trivial.hpp>

namespace WLogger {

///////////////////////////////////////////////////////////////////////////////
// STATIC DECLARATIONS                                                       //
///////////////////////////////////////////////////////////////////////////////

std::unique_ptr<SingletonLogger> SingletonLogger::m_instance;
std::once_flag SingletonLogger::m_onceFlag;
Logger SingletonLogger::m_logger;

///////////////////////////////////////////////////////////////////////////////
// PUBLIC STATIC SECTION                                                     //
///////////////////////////////////////////////////////////////////////////////

SingletonLogger& SingletonLogger::instance() {
	std::call_once(m_onceFlag, [] {
		m_instance.reset(new SingletonLogger);
	});
	return *m_instance.get();
}

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

void SingletonLogger::write(const Logger::Level &level, const std::string &message) {
	m_logger.write(level, message);
}

void SingletonLogger::write(const Logger::Level &level, const std::wstring &message) {
	m_logger.write(level, message);
}

void SingletonLogger::write(const Logger::Level &level, const QString &message) {
	m_logger.write(level, message);
}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SECTION                                                           //
///////////////////////////////////////////////////////////////////////////////

SingletonLogger::SingletonLogger() :
	QObject() {
	connect(&m_logger, Logger::logAdded, this, SingletonLogger::logAdded);
}

} // namespace WLogger
