#ifndef WTRADEGUI_STOCKWIDGET_H_
#define WTRADEGUI_STOCKWIDGET_H_

#include "wtradegui/wtradegui_global.h"
#include <QWidget>
#include <QLabel>
#include <QString>
#include <QGridLayout>
#include <QColor>

namespace Trade {
	class Market;
	class Stock;
	class Currency;
} // namespace Trade

namespace WTradeGui {

class PriceLabel;
class MiniStockPlot;

class WTRADEGUISHARED_EXPORT StockWidget : public QWidget {

	Q_OBJECT

public:

	explicit StockWidget(QWidget *parent = 0);
	virtual ~StockWidget() = default;

public slots:

	void setMarket(const Trade::Market &market);
	void setMarket(const QString &marketID);
	void setStock(const Trade::Stock &stock);
	void setStock(const QString &stockID);
	void setQuantity(const int &quantity);
	void setPrice(const double &price);
	void setCurrency(const Trade::Currency &currency);
	void setPlotLineColor(const QColor &color);
	void setPlotBackgroundColor(const QColor &color);

private:

	QLabel *m_marketLabel;
	QLabel *m_stockLabel;
	QLabel *m_quantityLabel;
	PriceLabel *m_priceLabel;
	MiniStockPlot *m_plot;
	QGridLayout *m_layout;
};

} // namespace WTradeGui

#endif // !WTRADEGUI_STOCKWIDGET_H_
