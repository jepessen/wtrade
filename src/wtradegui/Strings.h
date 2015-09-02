#ifndef WTRADEGUI_STRINGS_H_
#define WTRADEGUI_STRINGS_H_

#include <QString>

namespace WTradeGui {
namespace Menu {
const QString FileName(QObject::tr("&File"));
const QString ToolsName(QObject::tr("&Tools"));
} // namespace Menu
namespace Action {
const QString NewName(QObject::tr("&New..."));
const QString OpenName(QObject::tr("&Open..."));
const QString SaveName(QObject::tr("&Save"));
const QString SaveAsName(QObject::tr("Save &As..."));
const QString CloseName(QObject::tr("&Close..."));
const QString PrintReportName(QObject::tr("&Print report..."));
const QString QuitName(QObject::tr("&Quit"));
const QString OptionsName(QObject::tr("&Options..."));
} // namespace Action
} // namespace WTradeGui

#endif // !WTRADEGUI_STRINGS_H_
