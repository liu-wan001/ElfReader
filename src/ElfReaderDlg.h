#ifndef ELF_READER_DLG_H
#define ELF_READER_DLG_H

#include <define.h>
#include "afxcmn.h"


// ElfReaderDlg �Ի���

class ElfReaderDlg : public CDialogEx
{
	DECLARE_DYNAMIC(ElfReaderDlg)

public:
	ElfReaderDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ElfReaderDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	BOOL PreTranslateMessage(MSG* pMsg);
	DECLARE_MESSAGE_MAP()
public:
	void InitTreeCtrl();
	CTreeCtrl m_tree;
	CString m_FileName;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg LRESULT OnStartAnalyze(WPARAM wParam,LPARAM lParam);
	afx_msg void OnDropFiles(HDROP hDropInfo);
};

#endif
