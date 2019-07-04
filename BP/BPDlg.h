
// BPDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include "atltypes.h"
#include "BPDlgResult.h"
#include "BPDlgFrame.h"
#include "vfw.h"

#define TRAIN_THREAD_EXIT      WM_USER+100

// CBPDlg �Ի���
class CBPDlg : public CDialogEx
{
// ����
public:
	CBPDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������

	enum { IDD = IDD_BP_DIALOG };
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;
	CWinThread *m_pThreadTrain;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg LRESULT TrainThreadExit(WPARAM wParam,LPARAM lParam);
	DECLARE_MESSAGE_MAP()

public:
	CComboBox m_HideActivationFun;
	CComboBox m_OutputActivationFun;
	CComboBox m_TrainFun;
	CButton m_OpenFile;
	CEdit m_FilePathName;
	CRect m_rectGraph;
	//UINT m_MaxTrainNum;
	//UINT m_TrainRatio;
	//UINT m_TestRatio;
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnBnClickedOpen();
	afx_msg void OnBnClickedStratTrain();
	afx_msg void OnBnClickedSetting();
	afx_msg void OnBnClickedClassfil();
	afx_msg void OnHelpAbout();
	afx_msg void OnBnClickedCheckClosemusic();
	afx_msg void OnBnClickedAdvance();

private:
	CButton m_isSetting;
	CMenu m_menu;
	HWND m_hMCI;
	//CBPDlgResult m_resultDlg;


};


extern UINT TrainRatio;
extern UINT TestRatio;
extern UINT MaxTrainNum;
