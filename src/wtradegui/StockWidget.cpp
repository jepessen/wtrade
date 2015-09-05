#include "wtradegui/StockWidget.h"
#include "wtradegui/Strings.h"
#include "wtradegui/PriceLabel.h"
#include "wtradegui/MiniStockPlot.h"
#include "trade/Market.h"
#include "trade/Stock.h"
#include "trade/Currency.h"

namespace WTradeGui {

///////////////////////////////////////////////////////////////////////////////
// USING SECTION                                                             //
///////////////////////////////////////////////////////////////////////////////

using Trade::Market;
using Trade::Stock;
using Trade::Currency;

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

StockWidget::StockWidget(QWidget *parent) :
	QWidget(parent),
	m_marketLabel(new QLabel(this)),
	m_stockLabel(new QLabel(this)),
	m_quantityLabel(new QLabel(this)),
	m_priceLabel(new PriceLabel(this)),
	m_plot(new MiniStockPlot(this)),
	m_layout(new QGridLayout(this)) {
	setQuantity(0);
	setFixedSize(300, 80);
	m_layout->addWidget(m_stockLabel, 0, 0, 1, 1);
	m_layout->addWidget(m_marketLabel, 1, 0, 1, 1);
	m_layout->addWidget(m_quantityLabel, 2, 0, 1, 1);
	m_layout->addWidget(m_priceLabel, 0, 1, 1, 1);
	m_layout->addWidget(m_plot, 0, 2, -1, 1);
	m_plot->setFixedSize(80, 80);
	setLayout(m_layout);
}

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SLOTS SECTION                                                      //
///////////////////////////////////////////////////////////////////////////////

void StockWidget::setMarket(const Market &market) {
	m_marketLabel->setText(market.getCode());
}

void StockWidget::setMarket(const QString &marketID) {
	m_marketLabel->setText(marketID);
}

void StockWidget::setStock(const Stock &stock) {
	m_stockLabel->setText(stock.getCode());
}

void StockWidget::setStock(const QString &stockID) {
	m_stockLabel->setText(stockID);
}

void StockWidget::setQuantity(const int &quantity) {
	const QString label(Label::Qty + ":" + QString::number(quantity));
	m_quantityLabel->setText(label);
}

void StockWidget::setPrice(const double &price) {
	m_priceLabel->setValue(price);
}
void StockWidget::setCurrency(const Currency &currency) {
	m_priceLabel->setCurrency(currency);
}

void StockWidget::setPlotLineColor(const QColor &color) {
	m_plot->setLineColor(color);
}

void StockWidget::setPlotBackgroundColor(const QColor &color) {
	m_plot->setBackgroundColor(color);
}

} // namespace WTradeGui