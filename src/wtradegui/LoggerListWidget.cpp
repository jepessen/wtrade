#include "wtradegui/LoggerListWidget.h"
#include "wtradegui/Strings.h"
#include <QHeaderView>
#include <QDateTime>

namespace WTradeGui {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

LoggerListWidget::LoggerListWidget(QWidget *parent) :
	QTableWidget(parent)
{
	QStringList headers;
	headers << Label::Time << Label::Level << Label::Message;
	setColumnCount(3);
	setHorizontalHeaderLabels(headers);
	horizontalHeader()->setStretchLastSection(true);
}

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SLOTS SECTION                                                      //
///////////////////////////////////////////////////////////////////////////////

void LoggerListWidget::addRow(const QDateTime &timeStamp, const LogLevel &level, const QString &message) {
	const int rowNumber = rowCount();
	QTableWidgetItem *dateTimeItem(new QTableWidgetItem(timeStamp.toString(Time::YMDHSM)));
	QTableWidgetItem *levelItem(new QTableWidgetItem(getLevelString(level)));
	QTableWidgetItem *messageItem(new QTableWidgetItem(message));
	setRowCount(rowNumber + 1);
	setItem(rowNumber, 0, dateTimeItem);
	setItem(rowNumber, 1, levelItem);
	setItem(rowNumber, 2, messageItem);
}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SECTION                                                           //
///////////////////////////////////////////////////////////////////////////////

QString LoggerListWidget::getLevelString(const LogLevel &level) {
	switch (level) {
		case LogLevel::TRACE : {
			return Label::Trace;
		} break;
		case LogLevel::DEBUG : {
			return Label::Debug;
		} break;
		case LogLevel::INFO : {
			return Label::Info;
		} break;
		case LogLevel::WARNING : {
			return Label::Warning;
		} break;
		case LogLevel::ERROR : {
			return Label::Error;
		} break;
		case LogLevel::FATAL : {
			return Label::Fatal;
		} break;
		default : {
			return QString();
		}
		return QString();
	}
}

} // namespace WTradeGui
