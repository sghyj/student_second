#include"CStudent.h"
#include<iostream>


bool CStudent::Judge_Password(string Password )
	{
		 if ( sPassword == Password)
		{
			return true;
		}else{
			return false;
		}
	}

string CStudent::Get_Password() const
{
	return sPassword;
}

void CStudent::Input_Password(string Password )
{
	sPassword = Password;
}

double CStudent::Get_dCompuer() const 
{
	return dComputer;
}

double CStudent::Get_dMath() const
{
	return dMath;
}

int CStudent::Get_iStudent_ID() const
{
	return iStudent_ID;
}

string CStudent::Get_sName() const
{
	return sName;
}

string CStudent::Get_cSex() const
{
	return cSex;
}

int CStudent::Get_iClass() const
{
	return iClass;
}
void CStudent::Input_iClass(int Class)
{
	iClass = Class;
}

void CStudent::Input_cSex(string Sex)
{
	cSex = Sex;
}

void CStudent::Input_iStudent_ID(int iStu_id)
{
	iStudent_ID = iStu_id;
}

void CStudent::Print_Subject() const
{
	cout << "数学 =" << dMath << "  计算机 =" << dComputer<<endl;
}

void CStudent::Input_sName(string name)
{
	sName = name;
}

void CStudent::Input_dMath(double Math)
{
	dMath = Math;
}

void CStudent::Input_dComputer(double Computer)
{
	dComputer = Computer;
}
