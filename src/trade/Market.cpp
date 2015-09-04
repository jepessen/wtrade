#include "trade/Market.h"

namespace Trade {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

Market::Market()
{}

void Market::setName(const QString &name) {
	m_name = name;
}

void Market::setCode(const QString &code) {
	m_code = code;
}

QString Market::getName() const {
	return m_name;
}

QString Market::getCode() const {
	return m_code;
}

} // namespace Trade

