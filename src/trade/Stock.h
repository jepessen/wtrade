#ifndef TRADE_STOCK_H_
#define TRADE_STOCK_H_

#include "trade/trade_global.h"
#include <QString>
#include <memory>

namespace Trade {

class TRADESHARED_EXPORT Stock {

public:

	typedef std::shared_ptr<Stock> Ptr;

public:

	Stock();
	virtual ~Stock() = default;

	void setCode(const QString &code);
	QString getCode() const;

private:

	QString m_code;
};

} // namespace Trade

#endif // !TRADE_STOCK_H_
