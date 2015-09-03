#ifndef WUPDATER_DATACONNECTION_H_
#define WUPDATER_DATACONNECTION_H_

#include "wupdater/wupdater_global.h"
//#include "trade/Market.h"
#include <QString>
#include <QtPlugin>
#include <memory>

namespace WUpdater {

class WUPDATER_EXPORT DataConnection {
public:

	typedef std::shared_ptr<DataConnection> Ptr;

public:

	virtual ~DataConnection(){}
	virtual QString getName() const = 0;
	//virtual Trade::MarketList getMarketList() const = 0;
};

} // namespace WUpdater

Q_DECLARE_INTERFACE(WUpdater::DataConnection, "org.wtrade.dataconnection/0.1")

#endif // WUPDATER_DATACONNECTION_H_
