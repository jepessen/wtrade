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
namespace Label {
const QString Qty(QObject::tr("Qty"));
const QString Logger(QObject::tr("Logger"));
const QString Level(QObject::tr("Level"));
const QString Time(QObject::tr("Time"));
const QString Message(QObject::tr("Message"));
const QString Trace(QObject::tr("Trace"));
const QString Debug(QObject::tr("Debug"));
const QString Info(QObject::tr("Info"));
const QString Warning(QObject::tr("Warning"));
const QString Error(QObject::tr("Error"));
const QString Fatal(QObject::tr("Fatal"));
} // namespace Label
namespace Time {
const QString YMDHSM(QObject::tr("yyyy-MM-dd - hh:mm:ss.zzz"));
} // namespace Time
} // namespace WTradeGui

#endif // !WTRADEGUI_STRINGS_H_
