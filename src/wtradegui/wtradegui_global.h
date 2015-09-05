#ifndef WTRADEGUI_GLOBAL_H_
#define WTRADEGUI_GLOBAL_H_

#include <QtCore/qglobal.h>

#if defined(WTRADEGUI_LIBRARY)
#  define WTRADEGUISHARED_EXPORT Q_DECL_EXPORT
#else
#  define WTRADEGUISHARED_EXPORT Q_DECL_IMPORT
#endif

namespace WTradeGui {

enum class LogLevel {
	TRACE,
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	FATAL
};

} // namespace WTradeGui

#endif // WTRADEGUI_GLOBAL_H_
