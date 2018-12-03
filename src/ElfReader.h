#ifndef ELF_READER_H
#define ELF_READER_H

#include <QtWidgets/QMainWindow>
#include "ui_ElfReader.h"
#include "define.h"
//��קȡ�ļ�·��
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>
//�ļ�ѡ��Ի���
#include <QFileDialog>
#include <QMessageBox>
class ElfReader : public QMainWindow
{
	Q_OBJECT

public:
	ElfReader(QWidget *parent = Q_NULLPTR);
	void clean_up_data();
private:
	Ui::ElfReader ui;
	char *file;
protected:
	void dropEvent(QDropEvent *event);
	void dragEnterEvent(QDragEnterEvent *event);
public slots:
	void pushButton_open_clicked();
	void pushButton_save_clicked();
	void start_analyze_slot(QString file_name);
signals:
	void start_analyze(QString file_name);
};

#endif
