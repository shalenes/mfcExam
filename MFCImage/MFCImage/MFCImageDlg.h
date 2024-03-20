
// MFCImageDlg.h: 헤더 파일
//

#pragma once


// CMFCImageDlg 대화 상자
class CMFCImageDlg : public CDialogEx
{
private :
	CImage m_image;
	BOOL validImgPos(int x, int y);
	CString strFile;
	CArray<double, double> centerX;
	CArray<double, double> centerY;


// 생성입니다.
public:
	CMFCImageDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCIMAGE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnImage();
	//afx_msg void OnBnClickedBtnSave();
	//afx_msg void OnBnClickedBtnLoad();
	void UpdateDisplay();
	void moveRect(int nSttX, int nSttY, int nRadius);
	void drawCircle(unsigned char* fm,int i,int j, int nRadius, int nGray);
	bool isInCircle(int i, int j, int nCenterX, int nCenterY, int nRadius);
	void saveFile(int nSttX);
	void showFile(int move);
	void checkCenter();
	afx_msg void OnBnClickedBtnAction();
};
