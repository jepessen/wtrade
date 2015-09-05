#ifndef WTRADEGUI_MINISTOCKPLOT_H_
#define WTRADEGUI_MINISTOCKPLOT_H_

#include "wplot/Plot2D.h"
#include "wplot/LineGraph2D.h"
#include <QWidget>

namespace WTradeGui {

class MiniStockPlot : public QWidget {

Q_OBJECT

public:

	typedef enum {
		HOUR,
		DAY,
		WEEK,
		MONTH,
		YEAR
	} Interval;

public:

	explicit MiniStockPlot(QWidget *parent = 0);
	virtual ~MiniStockPlot() = default;

public slots:

	void setData();
	void setLineColor(const QColor &color);
	void setBackgroundColor(const QColor &color);
	void setInterval(const Interval interval);

private:

	WPlot::Plot2D *m_plot;
	WPlot::LineGraph2D::Ptr m_lineGraph;
};

} // namespace WTradeGui

#endif // !WTRADEGUI_MINISTOCKPLOT_H_
