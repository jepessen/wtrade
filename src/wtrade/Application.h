#ifndef WTRADE_APPLICATION_H_
#define WTRADE_APPLICATION_H_

#include <QObject>

namespace WTradeGui {
	class MainWindow;
	class MenuAction;
}

namespace WTrade {

class Application : public QObject {

	Q_OBJECT

public:

	explicit Application(QObject *parent = 0);
	virtual ~Application() = default;
	void showMainWindow();

private slots:

	void executeMenuAction(const WTradeGui::MenuAction &action);

private:

	void createMainWindowConnections();
	void executeFileAction(const QString &action);
	void executeToolsAction(const QString &action);

private:

	WTradeGui::MainWindow *m_mainWindow;

};

} // namespace WTrade

#endif // !WTRADE_APPLICATION_H_

