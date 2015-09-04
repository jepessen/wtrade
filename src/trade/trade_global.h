#ifndef TRADE_GLOBAL_H
#define TRADE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TRADE_LIBRARY)
#  define TRADESHARED_EXPORT Q_DECL_EXPORT
#else
#  define TRADESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TRADE_GLOBAL_H
