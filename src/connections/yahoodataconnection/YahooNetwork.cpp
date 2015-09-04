#include "yahoodataconnection/YahooNetwork.h"
#include "yahoodataconnection/Strings.h"
#include <QNetworkReply>

namespace WUpdater {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

YahooNetwork::YahooNetwork(QObject *parent) :
	QObject(parent),
	m_networkManager(new QNetworkAccessManager(this)) {}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SLOTS SECTION                                                     //
///////////////////////////////////////////////////////////////////////////////

/**
 * This slot is called when the reply request is finished.
 *
 * @param reply Network reply.
 */
void YahooNetwork::replyFinished(QNetworkReply* reply) {
	switch (reply->error()) {
	case QNetworkReply::NoError : {
		QString result(reply->readAll());
	} break;
	default : {

	}
	}
}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SECTION                                                           //
///////////////////////////////////////////////////////////////////////////////

/**
 * Build the string query that must be passed to Yahoo servers in order to retrieve
 * data.
 *
 * @param query Query
 *
 * @return Query converted in Yahoo url.
 */
QString YahooNetwork::createQuery(const QString &query) const {
	QString copiedQuery(query);
	QString queryWithSpacesFixed(copiedQuery.replace(QString(" "), QString("%20")));
	return YQLBaseURI + queryWithSpacesFixed;
}

} // namespace WUpdater
