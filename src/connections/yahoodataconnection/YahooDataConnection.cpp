#include "yahoodataconnection/YahooDataConnection.h"
#include "yahoodataconnection/Strings.h"
#include <QVector>

namespace WUpdater {

///////////////////////////////////////////////////////////////////////////////
// USING SECTION                                                             //
///////////////////////////////////////////////////////////////////////////////

using Trade::Market;
using Trade::MarketList;

///////////////////////////////////////////////////////////////////////////////
// CONSTANTS SECTION                                                         //
///////////////////////////////////////////////////////////////////////////////

/**
 * List of markets from http://www.eoddata.com/symbols.aspx
 *
 * @todo: check from yahoo api.
 */
const QVector<QPair<QString, QString>> marketNames = {
	{"AMEX", "American Stock Exchange"},
	{"AMS", "Euronext Amsterdam"},
	{"ASX", "Australian Securities Exchange"},
	{"BRU", "Euronext Brussels"},
	{"CBOT", "Chicago Board of Trade"},
	{"CFE", "Chicago Futures Exchange"},
	{"CME", "Chicago Merchantile Exchange"},
	{"COMEX", "New York Commodity Exchange"},
	{"EUREX", "EUREX Futures Exchange"},
	{"FOREX", "Foreign Exchange"},
	{"HKEX", "Hong Kong Stock Exchange"},
	{"INDEX", "Global Indices"},
	{"KCBT", "Kansas City Board of Trade"},
	{"LIFFE", "LIFFE Futures and Options"},
	{"LIS", "Euronext Lisbon"},
	{"LSE", "London Stock Exchange"},
	{"MGEX", "Minneapolis Grain Exchange"},
	{"MLSE", "Milan Stock Exchange"},
	{"MSE", "Madrid Stock Exchange"},
	{"NASDAQ", "NASDAQ Stock Exchange"},
	{"NYBOT", "New York Board of Trade"},
	{"NYMEX", "New York Merchantile Exchange"},
	{"NYSE", "New York Stock Exchange"},
	{"NZX", "New Zealand Exchange"},
	{"OPRA", "US Options"},
	{"OTCBB", "OTC Bulletin Board"},
	{"PAR", "Euronext Paris"},
	{"SGX", "Singapore Stock Exchange"},
	{"TSX", "Toronto Stock Exchange"},
	{"TSXV", "Toronto Venture Exchange"},
	{"USMF", "Mutual Funds"},
	{"WCE", "Winnipeg Commodity Exchange"},
	{"", ""}
};

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

YahooDataConnection::YahooDataConnection() :
	m_network(new QNetworkAccessManager(this))
{}

/**
 * Retrieve the name of the service.
 *
 * @return Service name.
 */
QString YahooDataConnection::getName() const {
	return ServiceName;
}

/**
 * Retrieve the list of available markets for whick stock data can be retrieved.
 *
 * @return Markets list.
 */
MarketList YahooDataConnection::getMarketList() const {
	MarketList marketList;
	for (auto& it : marketNames) {
		Market market;
		market.setCode(it.first);
		market.setName(it.second);
		marketList.push_back(market);
	}
	return marketList;
}

} // namespace WUpdater
