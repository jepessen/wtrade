#include "wtradegui/LoggerWidget.h"
#include <QApplication>
#include <QMainWindow>
#include <QDateTime>
#include <iostream>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QMainWindow mainWindow;
	mainWindow.show();
	mainWindow.setFixedSize(800, 600);
	WTradeGui::LoggerWidget *widget(new WTradeGui::LoggerWidget(&mainWindow));
	QDateTime time(QDateTime::currentDateTime());
	widget->addRow(time, WTradeGui::LogLevel::WARNING, "Test Warning message");
	mainWindow.addDockWidget(Qt::RightDockWidgetArea, widget);
	return a.exec();
}
