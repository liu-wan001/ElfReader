#include "ElfReader.h"

ElfReader::ElfReader(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//����splitter���� ���ռ2�� �ұ�ռ5��
	ui.splitter_left->setStretchFactor(0, 2);
	ui.splitter_left->setStretchFactor(1, 5);
}

void ElfReader::dropEvent(QDropEvent *event)
{
	qDebug() << "drop";
}

void ElfReader::pushButton_open_clicked()
{
	qDebug() << "open";
}

void ElfReader::pushButton_save_clicked()
{
	qDebug() << "save";
}
