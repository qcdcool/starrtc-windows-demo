#pragma once


// CSelectShowWndDlg 对话框

class CSelectShowWndDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSelectShowWndDlg)

public:
	CSelectShowWndDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CSelectShowWndDlg();

	// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum {
		IDD = IDD_DIALOG_SELECT_SHOW_WND
	};
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	int m_nSelect;
	bool m_bSure;
};
