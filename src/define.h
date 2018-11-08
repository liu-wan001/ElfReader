#ifndef DEFINE_H
#define DEFINE_H

#define		WM_START_ANALYZE	WM_USER + 100


#define		MESSAGE_CAPTION				L"��ʾ"
#define		MESSAGE_OPEN_FILE_ERROR		L"�ļ���ʧ��"
#define		MESSAGE_READ_FILE_ERROR		L"�ļ���ȡʧ��"
#define		MESSAGE_FILE_FORMAT_ERROR   L"�ļ���ȡʧ��"
#define		MESSAGE_NO_TYPE				L"û���������ͣ��뽫�ļ��������ύissue"


#define		ELF_OK						0
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