#include "wtradegui/PriceLabel.h"

namespace WTradeGui {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

PriceLabel::PriceLabel(QWidget *parent) :
	QWidget(parent),
	m_currency(),
	m_value(),
	m_label(new QLabel(this))
{}

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SLOTS SECTION                                                      //
///////////////////////////////////////////////////////////////////////////////

void PriceLabel::setValue(const double &value) {
	m_value = QString::number(value);
	updateLabel();
}
void PriceLabel::setCurrency(const Trade::Currency &currency) {
	m_currency = currency.getValueString();
	updateLabel();
}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SECTION                                                           //
///////////////////////////////////////////////////////////////////////////////

void PriceLabel::updateLabel() {
	m_label->setText(m_value + " " + m_currency);
}

} // namespace WTradeGui
