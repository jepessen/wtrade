#include "trade/Stock.h"

namespace Trade {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

Stock::Stock() :
	m_code()
{}

void Stock::setCode(const QString &code) {
	m_code = code;
}

QString Stock::getCode() const {
	return m_code;
}

} // namespace Trade
