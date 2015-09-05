#ifndef WTRADEGUI_PRICELABEL_H_
#define WTRADEGUI_PRICELABEL_H_

#include "trade/Currency.h"
#include <QWidget>
#include <QLabel>

namespace WTradeGui {

class PriceLabel : public QWidget {

	Q_OBJECT

public:

	explicit PriceLabel(QWidget *parent = 0);
	virtual ~PriceLabel() = default;

public slots:

	void setValue(const double &value);
	void setCurrency(const Trade::Currency &currency);

private:

	void updateLabel();

	QString m_currency;
	QString m_value;
	QLabel *m_label;
};

} // WTradeGui

#endif // !WTRADEGUI_PRICELABEL_H_
