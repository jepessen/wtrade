#include "wtradegui/MiniStockPlot.h"
#include "wplot/Background.h"
#include "wplot/Grid2D.h"

namespace WTradeGui {

///////////////////////////////////////////////////////////////////////////////
// USING SECTION                                                             //
///////////////////////////////////////////////////////////////////////////////

using WPlot::Plot2D;
using WPlot::LineGraph2D;
using WPlot::Background;
using WPlot::Grid2D;
using WPlot::Padding;

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

MiniStockPlot::MiniStockPlot(QWidget *parent) :
	QWidget(parent),
	m_plot(new Plot2D(this)),
	m_lineGraph(new LineGraph2D)
{}

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SLOTS SECTION                                                      //
///////////////////////////////////////////////////////////////////////////////

void MiniStockPlot::setData() {

}

void MiniStockPlot::setLineColor(const QColor &color) {
	m_lineGraph->setLineColor(color);
	Grid2D::Ptr grid(new Grid2D);
	grid->setBoundaryColor(color);
	grid->setPrimaryXColor(QColor(0, 0, 0, 0));
	grid->setSecondaryXColor(QColor(0, 0, 0, 0));
	grid->setPrimaryYColor(QColor(0, 0, 0, 0));
	grid->setSecondaryYColor(QColor(0, 0, 0, 0));
	m_plot->addGrid(0, grid);
	m_plot->setPadding(0, Padding::PIXELS);
	m_plot->setFixedSize(80, 70);
}

void MiniStockPlot::setBackgroundColor(const QColor &color) {
	Background::Ptr background(new Background);
	background->setColor(color);
	m_plot->setBackground(background);
}

void MiniStockPlot::setInterval(const Interval interval) {
}

} // namespace WTradeGui
