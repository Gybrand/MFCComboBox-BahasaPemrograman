
// MFCApplication10Dlg.h : header file
//

#pragma once


// CMFCApplication10Dlg dialog
class CMFCApplication10Dlg : public CDialogEx
{
// Construction
public:
	CMFCApplication10Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION10_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeCombo1();
	CComboBox m_daftarkota;
	CString m_kotapilihan;
	afx_msg void OnEnChangeEdit1();
};
