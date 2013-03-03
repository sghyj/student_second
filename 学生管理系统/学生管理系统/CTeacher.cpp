#include"CTeacher.h"
#include<iostream>

bool CTeacher::Judge_Password(string Password )
	{
		 if ( sPassword == Password)
		{
			return true;
		}else{
			return false;
		}
	}

void CTeacher::Input_sName(string Name)
{
	sName = Name;
}

void CTeacher::Input_Password(string Password )
	{
		sPassword = Password;
	}

int CTeacher::Get_iTeacher_ID() const
{
	return iTeacher_ID;
}

string CTeacher::Get_sName() const
{
	return sName;
}

string CTeacher::Get_cSex() const
{
	return cSex;
}

int CTeacher::Get_iClass() const
{
	return iClass;
}
void CTeacher::Input_iClass(int Class)
{
	iClass = Class;
}

void CTeacher::Input_cSex(string Sex)
{
	cSex = Sex;
}

void CTeacher::Input_iTeacher_ID(int Teacher_id)
{
	iTeacher_ID = Teacher_id;
}

void CTeacher::change_Computer(CStudent &s,double Computer)
{
	s.dComputer = Computer;
}

void CTeacher::change_Math(CStudent &s, double Math)
{
	s.dMath = Math;
}

string CTeacher::Get_Password() const
{
	return sPassword;
}

void CTeacher::print_number() 
{
	cout<<"教师人数 = "<<number<<endl;
}

int CTeacher::number = 0;