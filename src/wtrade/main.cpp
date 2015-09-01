#include "wtradegui/MainWindow.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	WTradeGui::MainWindow mainWindow;
	mainWindow.show();
	return a.exec();
}
