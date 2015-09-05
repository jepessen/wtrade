#include "wtradegui/StockWidget.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	WTradeGui::StockWidget *widget(new WTradeGui::StockWidget());
	widget->setMarket("MARKET");
	widget->setStock("STOCK");
	widget->setPlotLineColor(Qt::blue);
	widget->setPlotBackgroundColor(Qt::white);
	widget->setQuantity(100);
	widget->setPrice(200);
	//widget->setPlotInterval(MiniStockPlot::DAY);
	widget->show();
	return a.exec();
}
