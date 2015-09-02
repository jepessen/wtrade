#ifndef WTRADEGUI_GLOBAL_H
#define WTRADEGUI_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(WTRADEGUI_LIBRARY)
#  define WTRADEGUISHARED_EXPORT Q_DECL_EXPORT
#else
#  define WTRADEGUISHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // WTRADEGUI_GLOBAL_H