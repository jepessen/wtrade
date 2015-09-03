#ifndef WUPDATER_CONNECTIONLIBRARYLOADER_H_
#define WUPDATER_CONNECTIONLIBRARYLOADER_H_

#include "wupdater/wupdater_global.h"
#include "wupdater/DataConnection.h"
#include <QObject>
#include <QLibrary>
#include <QDir>
#include <memory>
#include <vector>

namespace WUpdater {

class WUPDATER_EXPORT ConnectionLibraryLoader : public QObject
{

	Q_OBJECT

public:

	typedef std::shared_ptr<ConnectionLibraryLoader> Ptr;

public:

	explicit ConnectionLibraryLoader(QObject *parent = 0);
	virtual ~ConnectionLibraryLoader() = default;
	void setBaseDir(const QDir &directory);
	void setBaseDir(const QString &directory);
	std::vector<DataConnection::Ptr> getDataConnections() const;

private:

	QDir m_directory;
};

} // namespace WUpdater

#endif // WUPDATER_CONNECTIONLIBRARYLOADER_H_
