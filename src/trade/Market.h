#ifndef TRADE_MARKET_H_
#define TRADE_MARKET_H_

#include "trade/trade_global.h"
#include <QString>
#include <QVector>
#include <memory>

namespace Trade {

class TRADESHARED_EXPORT Market
{
public:

	typedef std::shared_ptr<Market> Ptr;

public:

	Market();
	Market(const Market& market) = default;
	virtual ~Market() = default;
	void setName(const QString& name);
	void setCode(const QString& code);
	QString getName() const;
	QString getCode() const;

private:

	QString m_name;
	QString m_code;
};

typedef QVector<Market> MarketList;

} // namespace Trade

#endif // TRADE_MARKET_H_
