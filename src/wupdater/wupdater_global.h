#ifndef WUPDATER_GLOBAL_H
#define WUPDATER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(WUPDATER_LIBRARY)
#  define WUPDATER_EXPORT Q_DECL_EXPORT
#else
#  define WUPDATER_EXPORT Q_DECL_IMPORT
#endif

#endif // WUPDATER_GLOBAL_H
