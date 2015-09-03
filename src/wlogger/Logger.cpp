#include "wlogger/Logger.h"
#include <boost/log/trivial.hpp>

namespace WLogger {

///////////////////////////////////////////////////////////////////////////////
// PUBILC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

void Logger::write(const Level &level, const std::string &message) {
	switch (level) {
		case TRACE : {
			BOOST_LOG_TRIVIAL(trace) << message;
		} break;
		case DEBUG : {
			BOOST_LOG_TRIVIAL(debug) << message;
		} break;
		case INFO : {
			BOOST_LOG_TRIVIAL(info) << message;
		} break;
		case WARNING : {
			BOOST_LOG_TRIVIAL(warning) << message;
		} break;
		case ERROR : {
			BOOST_LOG_TRIVIAL(error) << message;
		} break;
		case FATAL : {
			BOOST_LOG_TRIVIAL(fatal) << message;
		}
	}
}

void Logger::write(const Level &level, const std::wstring &message) {
	switch (level) {
		case TRACE : {
			BOOST_LOG_TRIVIAL(trace) << message;
		} break;
		case DEBUG : {
			BOOST_LOG_TRIVIAL(debug) << message;
		} break;
		case INFO : {
			BOOST_LOG_TRIVIAL(info) << message;
		} break;
		case WARNING : {
			BOOST_LOG_TRIVIAL(warning) << message;
		} break;
		case ERROR : {
			BOOST_LOG_TRIVIAL(error) << message;
		} break;
		case FATAL : {
			BOOST_LOG_TRIVIAL(fatal) << message;
		}
	}
}

void Logger::write(const Level &level, const QString &message) {
#if WIN32
	std::string text = message.toLocal8Bit().constData();
#else
	std::string text = message.toUtf8().constData();
#endif
	switch (level) {
		case TRACE : {
			BOOST_LOG_TRIVIAL(trace) << text;
		} break;
		case DEBUG : {
			BOOST_LOG_TRIVIAL(debug) << text;
		} break;
		case INFO : {
			BOOST_LOG_TRIVIAL(info) << text;
		} break;
		case WARNING : {
			BOOST_LOG_TRIVIAL(warning) << text;
		} break;
		case ERROR : {
			BOOST_LOG_TRIVIAL(error) << text;
		} break;
		case FATAL : {
			BOOST_LOG_TRIVIAL(fatal) << text;
		}
	}
}

} // namespace WLogger
