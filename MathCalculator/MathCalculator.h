
// MathCalculator.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMathCalculatorApp:
// �йش����ʵ�֣������ MathCalculator.cpp
//

class CMathCalculatorApp : public CWinApp
{
public:
	CMathCalculatorApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMathCalculatorApp theApp;