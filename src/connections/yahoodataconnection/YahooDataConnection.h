#ifndef YAHOODATACONNECTION_YAHOODATACONNECTION_H_
#define YAHOODATACONNECTION_YAHOODATACONNECTION_H_

#include "yahoodataconnection/yahoodataconnection_global.h"
#include "wupdater/DataConnection.h"
#include <QObject>
#include <QtNetwork/QNetworkAccessManager>

namespace WUpdater {

class YAHOODATACONNECTIONSHARED_EXPORT YahooDataConnection : public QObject, public WUpdater::DataConnection
{

	Q_OBJECT
	Q_PLUGIN_METADATA(IID "org.wtrade.dataconnection/0.1" FILE "yahoodataconnection.json")
	Q_INTERFACES(WUpdater::DataConnection)

public:
	YahooDataConnection();
	virtual ~YahooDataConnection() = default;
	virtual QString getName() const;
	virtual Trade::MarketList getMarketList() const;

private:

	QNetworkAccessManager* m_network;

};

} // namespace WUpdater

#endif // YAHOODATACONNECTION_YAHOODATACONNECTION_H_

///////////////////////////////////////////////////////////////////////////////
// DOCUMENTATION                                                             //
///////////////////////////////////////////////////////////////////////////////

/**
 * @class TradeDataConnection::YahooDataConnection
 *
 * This class is a realization of TradeDataconnection::DataConnection interface.
 *
 * It allows to exchange data with a Yahoo server.
 */
