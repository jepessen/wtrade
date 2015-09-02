#include "wtrade/Application.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	WTrade::Application mainApplication;
	mainApplication.showMainWindow();
	return a.exec();
}
