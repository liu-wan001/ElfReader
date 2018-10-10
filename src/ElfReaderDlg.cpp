// ElfReaderDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ElfReader.h"
#include "ElfReaderDlg.h"
#include "afxdialogex.h"


// ElfReaderDlg �Ի���

IMPLEMENT_DYNAMIC(ElfReaderDlg, CDialogEx)

ElfReaderDlg::ElfReaderDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

ElfReaderDlg::~ElfReaderDlg()
{
}


void ElfReaderDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TREE1, m_tree);
}

void ElfReaderDlg::InitTreeCtrl()
{

}

BOOL ElfReaderDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	InitTreeCtrl();

	return TRUE;  
}


BOOL ElfReaderDlg::PreTranslateMessage(MSG* pMsg)
{
	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_ESCAPE)
		return TRUE;
	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_ESCAPE)
		return TRUE;
	return CDialogEx::PreTranslateMessage(pMsg);
}

BEGIN_MESSAGE_MAP(ElfReaderDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &ElfReaderDlg::OnBnClickedButton1)
	ON_MESSAGE(WM_START_ANALYZE,OnStartAnalyze)
	ON_WM_DROPFILES()
END_MESSAGE_MAP()


// ElfReaderDlg ��Ϣ�������




void ElfReaderDlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CFileDialog dlg(TRUE, //TRUEΪOPEN�Ի���FALSEΪSAVE AS�Ի���
		NULL,
		NULL,
		OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT,
		(LPCTSTR)_TEXT("All Files (*.*)|*.*||"),
		NULL);
	if (dlg.DoModal() == IDOK)
	{
		m_FileName = dlg.GetPathName(); //�ļ�����������FilePathName��
		PostMessage(WM_START_ANALYZE, NULL, NULL);
	}
}

LRESULT ElfReaderDlg::OnStartAnalyze(WPARAM wParam, LPARAM lParam)
{
	//����ļ��Ϸ� ��ո������� Ȼ���ʼ���ؼ�
	MessageBoxW(m_FileName.GetBuffer());
	return 0;
}


void ElfReaderDlg::OnDropFiles(HDROP hDropInfo)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int DropCount=DragQueryFile(hDropInfo,-1,NULL,0);
	//ȡ�ñ��϶��ļ�����Ŀ	
	WCHAR wcStr[MAX_PATH];		
	DragQueryFile(hDropInfo,0,wcStr,MAX_PATH);
	m_FileName = wcStr;
	DragFinish(hDropInfo);  
	//�ϷŽ�����,�ͷ��ڴ�
	PostMessage(WM_START_ANALYZE, NULL, NULL);
	CDialogEx::OnDropFiles(hDropInfo);
}
