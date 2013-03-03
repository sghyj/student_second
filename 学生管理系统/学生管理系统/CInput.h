#ifndef Header_CInput
#define Header_CInput

#include"CStudent.h"
#include"CTeacher.h"
#include<iostream>

class CInput
{
public:
	void Input_information(CStudent [],int );
	void Input_information(CTeacher [],int );
};

void CInput::Input_information(CTeacher t[],int iN)
{
	for(int i = 0; i < iN; i++)
	{
		int iTeacher_ID;
		string cSex;
		string sName;
		int iClass;
		cout<<"请输入教师号码,性别,名字,班级"<<endl;
		cin>>iTeacher_ID>>cSex>>sName>>iClass;
		t[i].Input_cSex(cSex);
		t[i].Input_iClass(iClass);
		t[i].Input_iTeacher_ID(iTeacher_ID);
		t[i].Input_sName(sName);
	}
}
void CInput::Input_information(CStudent s[],int iN)
{
	for(int i = 0; i < iN; i++)
	{
		int iStudent_ID;
		string cSex;
		string sName;
		int iClass;
		cout<<"请输入学生号码,性别,名字,班级"<<endl;
		cin>>iStudent_ID>>cSex>>sName>>iClass;
		s[i].Input_cSex(cSex);
		s[i].Input_iClass(iClass);
		s[i].Input_iStudent_ID(iStudent_ID);
		s[i].Input_sName(sName);
	}
}
#endif