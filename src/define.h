#ifndef DEFINE_H
#define DEFINE_H

#ifdef _DEBUG
#include <qDebug>
#endif

#include "elf.h"

#define		WM_START_ANALYZE	WM_USER + 100


#define		MESSAGE_CAPTION				u8"��ʾ"
#define		MESSAGE_OPEN_FILE_ERROR		u8"�ļ���ʧ��"
#define		MESSAGE_READ_FILE_ERROR		u8"�ļ���ȡʧ��"
#define		MESSAGE_FILE_FORMAT_ERROR   u8"�ļ���ȡʧ��"
#define		MESSAGE_NO_TYPE				u8"û���������ͣ��뽫�ļ��������ύissue"


#define		ELF_OK						 0
#define		ELF_INVALID_FORMAT			-1


typedef struct _item_data_t
{
	int type;

}item_data_t;

#define		ITEM_DATA_NOTHING				0	
#define		ITEM_DATA_ELF_HEADER			1
#define		ITEM_DATA_ELF_PROGRAM_HEADER	2
#define		ITEM_DATA_ELF_SECTION_HEADER	3

#endif