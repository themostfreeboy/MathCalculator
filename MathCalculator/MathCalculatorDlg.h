
// MathCalculatorDlg.h : 头文件
//

#pragma once


// CMathCalculatorDlg 对话框
class CMathCalculatorDlg : public CDialogEx
{
// 构造
public:
	CMathCalculatorDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MATHCALCULATOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString result;
	afx_msg void OnBnClickedBexit();
	afx_msg void OnBnClickedBnum0();
	afx_msg void OnBnClickedBnum1();
	afx_msg void OnBnClickedBnum2();
	afx_msg void OnBnClickedBnum3();
	afx_msg void OnBnClickedBnum4();
	afx_msg void OnBnClickedBnum5();
	afx_msg void OnBnClickedBnum6();
	afx_msg void OnBnClickedBnum7();
	afx_msg void OnBnClickedBnum8();
	afx_msg void OnBnClickedBnum9();
	afx_msg void OnBnClickedBplus();
	afx_msg void OnBnClickedBminus();
	afx_msg void OnBnClickedBmultiply();
	afx_msg void OnBnClickedBdivide();
	afx_msg void OnBnClickedBbracketstart();
	afx_msg void OnBnClickedBbracketend();
	afx_msg void OnBnClickedBbackspace();
	afx_msg void OnBnClickedBclear();
	afx_msg void OnBnClickedBcalculate();
};


class MyStack
{
public:
	MyStack();//构造函数
	int data[100];
	int top;
	void push(int x);
	int pop();
	bool IsEmpty();
};