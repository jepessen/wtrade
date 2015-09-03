#ifndef WLOGGER_GLOBAL_H_
#define WLOGGER_GLOBAL_H_

#include <QtCore/qglobal.h>

#if defined(WLOGGER_LIBRARY)
#  define WLOGGERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define WLOGGERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // WLOGGER_GLOBAL_H_
