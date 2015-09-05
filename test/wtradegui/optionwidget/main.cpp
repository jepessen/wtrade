#include "wtradegui/OptionWidget.h"
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
	WTradeGui::OptionWidget *widget(new WTradeGui::OptionWidget(&mainWindow));
	widget->show();
	return a.exec();
}
