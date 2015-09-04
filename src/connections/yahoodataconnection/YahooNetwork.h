#ifndef YQLNETWORK_H
#define YQLNETWORK_H

#include <QObject>
#include <QNetworkAccessManager>

namespace WUpdater {

class YahooNetwork : public QObject
{
	Q_OBJECT

public:

	explicit YahooNetwork(QObject *parent = 0);

private slots:

	void replyFinished(QNetworkReply* reply);

private:

	QString createQuery(const QString &query) const;

private:

	QNetworkAccessManager* m_networkManager;
};

} // namespace WUpdater

#endif // YQLNETWORK_H

///////////////////////////////////////////////////////////////////////////////
// DOCUMENTATION                                                             //
///////////////////////////////////////////////////////////////////////////////

/**
 * @class TradeDataConnection::YahooNetwork
 *
 * This class allows to exchange data with Yahoo servers. It contains methods
 * that allows to convert queries in Yahoo specific requestes, and convert its
 * replies in common format.
 */
