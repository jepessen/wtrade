#ifndef WTRADEGUI_LOGGERLEVELWIDGET_H_
#define WTRADEGUI_LOGGERLEVELWIDGET_H_

#include <QWidget>
#include <QLabel>
#include <QComboBox>
#include <QHBoxLayout>

namespace WTradeGui {

class LoggerLevelWidget : public QWidget {

	Q_OBJECT

public:

	explicit LoggerLevelWidget(QWidget *parent = 0);
	virtual ~LoggerLevelWidget() = default;

private:

	QLabel *m_label;
	QComboBox *m_levels;
	QHBoxLayout *m_layout;
};

} // namespace WTradeGui

#endif // !WTRADEGUI_LOGGERLEVELWIDGET_H_
