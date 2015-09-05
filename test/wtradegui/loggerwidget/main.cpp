#include "wtradegui/LoggerWidget.h"
#include <QApplication>
#include <QMainWindow>
#include <iostream>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QMainWindow mainWindow;
	mainWindow.show();
	mainWindow.setFixedSize(800, 600);
	WTradeGui::LoggerWidget *widget(new WTradeGui::LoggerWidget(&mainWindow));
	mainWindow.addDockWidget(Qt::RightDockWidgetArea, widget);
	return a.exec();
}
