#include "trade/Currency.h"

namespace Trade {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

Currency::Currency() :
	m_value(EUR)
{}

Currency::Currency(const Value &value)	:
	m_value(value)
{}

void Currency::setValue(const Currency::Value &value) {
	m_value = value;
}

Currency::Value Currency::getValue() const {
	return m_value;
}

QString Currency::getValueString() const {
	return QString();
}

} // namespace Trade
