#include "wtradegui/OptionTreeWidget.h"
#include "wtradegui/Strings.h"
#include <QHBoxLayout>
#include <QHeaderView>

namespace WTradeGui {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

OptionTreeWidget::OptionTreeWidget(QWidget *parent) :
	QWidget(parent),
	m_tree(new QTreeWidget(this)) {
	QHBoxLayout *layout(new QHBoxLayout(this));
	layout->addWidget(m_tree);
	m_tree->setColumnCount(1);
	m_tree->header()->close();
	QTreeWidgetItem *databaseItems = new QTreeWidgetItem(m_tree);
	databaseItems->setText(0, Label::Database);
	QTreeWidgetItem *databaseConnectionItem = new QTreeWidgetItem(databaseItems);
	databaseConnectionItem->setText(0, Label::Connection);
	QTreeWidgetItem *databaseBackupRestoreItem = new QTreeWidgetItem(databaseItems);
	databaseBackupRestoreItem->setText(0, Label::BackupRestore);
	connect(m_tree, &QTreeWidget::itemClicked, [=](QTreeWidgetItem * item, int column){
		auto parent = item->parent();
		if (parent != nullptr) {
			emit itemSelected(parent->text(0), item->text(0));
		}
	});
	setLayout(layout);
}

} // namespace WTradeGui
