#ifndef TRADE_CURRENCY_H_
#define TRADE_CURRENCY_H_

#include "trade/trade_global.h"
#include <QString>

namespace Trade {

class TRADESHARED_EXPORT Currency {

public:

	typedef enum {
		EUR,
		DLR
	} Value;

public:

	Currency();
	Currency(const Value &value);
	virtual ~Currency() = default;
	void setValue(const Value &value);
	Value getValue() const;
	QString getValueString() const;

private:

	Value m_value;
};

} // namespace Trade

#endif // !TRADE_CURRENCY_H_
