#include "wupdater/ConnectionLibraryLoader.h"
#include <QPluginLoader>

namespace WUpdater {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

ConnectionLibraryLoader::ConnectionLibraryLoader(QObject *parent) :
	QObject(parent)
{}

void ConnectionLibraryLoader::setBaseDir(const QDir &directory) {
	m_directory = directory;
}

void ConnectionLibraryLoader::setBaseDir(const QString &directory) {
	m_directory = QDir(directory);
}

std::vector<DataConnection::Ptr> ConnectionLibraryLoader::getDataConnections() const {
	std::vector<DataConnection::Ptr> list;
	QDir directory(m_directory);
	foreach (QString fileName, directory.entryList(QDir::Files)) {
		QPluginLoader loader(directory.absoluteFilePath(fileName));
		QObject *plugin = loader.instance();
		if (nullptr != plugin) {
			DataConnection::Ptr dataConnection(dynamic_cast<DataConnection*>(plugin));
			if (nullptr != dataConnection) {
				list.push_back(dataConnection);
			}
		}
	}
	return list;
}

} // namespace WUpdater
