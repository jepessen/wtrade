#include <QMainWindow>
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QMainWindow mainWindow;
	mainWindow.show();
	return a.exec();
}
