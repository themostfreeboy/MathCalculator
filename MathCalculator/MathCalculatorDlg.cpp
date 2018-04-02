
// MathCalculatorDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MathCalculator.h"
#include "MathCalculatorDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMathCalculatorDlg �Ի���




CMathCalculatorDlg::CMathCalculatorDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMathCalculatorDlg::IDD, pParent)
	, result(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMathCalculatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_ERESULT, result);
}

BEGIN_MESSAGE_MAP(CMathCalculatorDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BEXIT, &CMathCalculatorDlg::OnBnClickedBexit)
	ON_BN_CLICKED(IDC_BNUM_0, &CMathCalculatorDlg::OnBnClickedBnum0)
	ON_BN_CLICKED(IDC_BNUM_1, &CMathCalculatorDlg::OnBnClickedBnum1)
	ON_BN_CLICKED(IDC_BNUM_2, &CMathCalculatorDlg::OnBnClickedBnum2)
	ON_BN_CLICKED(IDC_BNUM_3, &CMathCalculatorDlg::OnBnClickedBnum3)
	ON_BN_CLICKED(IDC_BNUM_4, &CMathCalculatorDlg::OnBnClickedBnum4)
	ON_BN_CLICKED(IDC_BNUM_5, &CMathCalculatorDlg::OnBnClickedBnum5)
	ON_BN_CLICKED(IDC_BNUM_6, &CMathCalculatorDlg::OnBnClickedBnum6)
	ON_BN_CLICKED(IDC_BNUM_7, &CMathCalculatorDlg::OnBnClickedBnum7)
	ON_BN_CLICKED(IDC_BNUM_8, &CMathCalculatorDlg::OnBnClickedBnum8)
	ON_BN_CLICKED(IDC_BNUM_9, &CMathCalculatorDlg::OnBnClickedBnum9)
	ON_BN_CLICKED(IDC_BPLUS, &CMathCalculatorDlg::OnBnClickedBplus)
	ON_BN_CLICKED(IDC_BMINUS, &CMathCalculatorDlg::OnBnClickedBminus)
	ON_BN_CLICKED(IDC_BMULTIPLY, &CMathCalculatorDlg::OnBnClickedBmultiply)
	ON_BN_CLICKED(IDC_BDIVIDE, &CMathCalculatorDlg::OnBnClickedBdivide)
	ON_BN_CLICKED(IDC_BBRACKETSTART, &CMathCalculatorDlg::OnBnClickedBbracketstart)
	ON_BN_CLICKED(IDC_BBRACKETEND, &CMathCalculatorDlg::OnBnClickedBbracketend)
	ON_BN_CLICKED(IDC_BBACKSPACE, &CMathCalculatorDlg::OnBnClickedBbackspace)
	ON_BN_CLICKED(IDC_BCLEAR, &CMathCalculatorDlg::OnBnClickedBclear)
	ON_BN_CLICKED(IDC_BCALCULATE, &CMathCalculatorDlg::OnBnClickedBcalculate)
END_MESSAGE_MAP()


// CMathCalculatorDlg ��Ϣ�������

BOOL CMathCalculatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CMathCalculatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CMathCalculatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMathCalculatorDlg::OnBnClickedBexit()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	exit(0);
}


void CMathCalculatorDlg::OnBnClickedBnum0()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	CString cstr_temp=_T("");
	cstr_temp.Format(_T("%s0"),result);
	result=cstr_temp;
	UpdateData(FALSE);
}


void CMathCalculatorDlg::OnBnClickedBnum1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	CString cstr_temp=_T("");
	cstr_temp.Format(_T("%s1"),result);
	result=cstr_temp;
	UpdateData(FALSE);
}


void CMathCalculatorDlg::OnBnClickedBnum2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	CString cstr_temp=_T("");
	cstr_temp.Format(_T("%s2"),result);
	result=cstr_temp;
	UpdateData(FALSE);
}


void CMathCalculatorDlg::OnBnClickedBnum3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	CString cstr_temp=_T("");
	cstr_temp.Format(_T("%s3"),result);
	result=cstr_temp;
	UpdateData(FALSE);
}


void CMathCalculatorDlg::OnBnClickedBnum4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	CString cstr_temp=_T("");
	cstr_temp.Format(_T("%s4"),result);
	result=cstr_temp;
	UpdateData(FALSE);
}


void CMathCalculatorDlg::OnBnClickedBnum5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	CString cstr_temp=_T("");
	cstr_temp.Format(_T("%s5"),result);
	result=cstr_temp;
	UpdateData(FALSE);
}


void CMathCalculatorDlg::OnBnClickedBnum6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	CString cstr_temp=_T("");
	cstr_temp.Format(_T("%s6"),result);
	result=cstr_temp;
	UpdateData(FALSE);
}


void CMathCalculatorDlg::OnBnClickedBnum7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	CString cstr_temp=_T("");
	cstr_temp.Format(_T("%s7"),result);
	result=cstr_temp;
	UpdateData(FALSE);
}


void CMathCalculatorDlg::OnBnClickedBnum8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	CString cstr_temp=_T("");
	cstr_temp.Format(_T("%s8"),result);
	result=cstr_temp;
	UpdateData(FALSE);
}


void CMathCalculatorDlg::OnBnClickedBnum9()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	CString cstr_temp=_T("");
	cstr_temp.Format(_T("%s9"),result);
	result=cstr_temp;
	UpdateData(FALSE);
}


void CMathCalculatorDlg::OnBnClickedBplus()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	CString cstr_temp=_T("");
	cstr_temp.Format(_T("%s+"),result);
	result=cstr_temp;
	UpdateData(FALSE);
}


void CMathCalculatorDlg::OnBnClickedBminus()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	CString cstr_temp=_T("");
	cstr_temp.Format(_T("%s-"),result);
	result=cstr_temp;
	UpdateData(FALSE);
}


void CMathCalculatorDlg::OnBnClickedBmultiply()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	CString cstr_temp=_T("");
	cstr_temp.Format(_T("%s*"),result);
	result=cstr_temp;
	UpdateData(FALSE);
}


void CMathCalculatorDlg::OnBnClickedBdivide()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	CString cstr_temp=_T("");
	cstr_temp.Format(_T("%s/"),result);
	result=cstr_temp;
	UpdateData(FALSE);
}


void CMathCalculatorDlg::OnBnClickedBbracketstart()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	CString cstr_temp=_T("");
	cstr_temp.Format(_T("%s("),result);
	result=cstr_temp;
	UpdateData(FALSE);
}


void CMathCalculatorDlg::OnBnClickedBbracketend()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	CString cstr_temp=_T("");
	cstr_temp.Format(_T("%s)"),result);
	result=cstr_temp;
	UpdateData(FALSE);
}


void CMathCalculatorDlg::OnBnClickedBbackspace()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	const char* char_value=MyCStringToConstChar(result);
	char temp_char[100];
	strcpy(temp_char,char_value);
	if(strlen(temp_char)==0)
	{
		return;
	}
	temp_char[strlen(temp_char)-1]='\0';
	CString cstr_temp(temp_char);
	result.Format(_T("%s"),cstr_temp);
	UpdateData(FALSE);
}


void CMathCalculatorDlg::OnBnClickedBclear()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	result=_T("");
	UpdateData(FALSE);
}


void CMathCalculatorDlg::OnBnClickedBcalculate()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	MyStack mystack1;
	const char* char_value=MyCStringToConstChar(result);
	char char_data_1[100],char_data_2[100];
	strcpy(char_data_1,char_value);
	int i=0,j=0,int_result=0;
	char tempchar='\0';
	while(char_data_1[i]!='\0')
	{
		if(char_data_1[i]>='0'&&char_data_1[i]<='9')
		{
			while(char_data_1[i]>='0'&&char_data_1[i]<='9')
			{
				char_data_2[j++]=char_data_1[i++];
			}
			char_data_2[j++]='.';
            i--;
		}
		else if(char_data_1[i]=='(')
		{
			mystack1.push('(');
		}
		else if(char_data_1[i]==')')
		{
			tempchar=mystack1.pop();
			mystack1.top++;
			while(tempchar!='(') 
            {
				char_data_2[j++]=tempchar;
				mystack1.top--;
                tempchar=mystack1.pop();
				mystack1.top++;
            }
			mystack1.top--;
		}
		else if(char_data_1[i]=='+'||char_data_1[i]=='-')
		{
			if(!mystack1.IsEmpty())
			{
				tempchar=mystack1.pop();
				mystack1.top++;
				while(tempchar!='(') 
                {
				    char_data_2[j++]=tempchar;
					mystack1.top--;
					if(!mystack1.IsEmpty())
					{
						tempchar=mystack1.pop();
						mystack1.top++;
					}
  				    else
					{
						break;
					}
                }
			}
			mystack1.push(char_data_1[i]);
		}
		else if(char_data_1[i]=='*'||char_data_1[i]=='/')
		{

			if(!mystack1.IsEmpty())
			{
				tempchar=mystack1.pop();
				mystack1.top++;
				while(tempchar=='*'||tempchar=='/')
				{
					char_data_2[j++]=tempchar;
					mystack1.top--;
					if(!mystack1.IsEmpty())
					{
						tempchar=mystack1.pop();
						mystack1.top++;
					}
					else
					{
						break;
					}
				 }
			  }
			  mystack1.push(char_data_1[i]);
		}
		i++;
	}
	while(!mystack1.IsEmpty())
	{
		char_data_2[j++]=mystack1.pop();
	}
	char_data_2[j]='\0';
	MyStack mystack2;
	int tempint=0,tempint_1=0,tempint_2=0;
	i=0;
	j=0;
	while(char_data_2[i]!='\0')
	{
		if(char_data_2[i]>='0'&&char_data_2[i]<='9')
		{
			tempint=0;
			while(char_data_2[i]>='0'&&char_data_2[i]<='9')
			{
				tempint=tempint*10+char_data_2[i++]-'0';
			}
			mystack2.push(tempint);
		}
		else if(char_data_2[i]=='+')
		{
			tempint_1=mystack2.pop();
			tempint_2=mystack2.pop();
			mystack2.push(tempint_2+tempint_1);
		}
		else if(char_data_2[i]=='-')
		{
			tempint_1=mystack2.pop();
			tempint_2=mystack2.pop();
			mystack2.push(tempint_2-tempint_1);
		}
		else if(char_data_2[i]=='*')
		{
			tempint_1=mystack2.pop();
			tempint_2=mystack2.pop();
			mystack2.push(tempint_2*tempint_1);
		}
		else if(char_data_2[i]=='/')
		{
			tempint_1=mystack2.pop();
			tempint_2=mystack2.pop();
			mystack2.push(tempint_2/tempint_1);
		}
		i++;
	}
	int_result=mystack2.pop();
	result.Format(_T("%d"),int_result);
	UpdateData(FALSE);
}



MyStack::MyStack()
{
	for(int i=0;i<100;i++)
	{
		data[i]=0;
	}
	top=-1;
}


void MyStack::push(int x)
{
	if(top<99)   	data[++top]=x;
}


int MyStack::pop()
{
	if(top>=0)
	{
		int temp=data[top--];
		return temp;
	}
	return -1;
}


bool MyStack::IsEmpty()
{
	if(top==-1)     return true;
	    else        return false;
}