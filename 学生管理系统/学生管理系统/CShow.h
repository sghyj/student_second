#ifndef Head_show
#define Head_show

#include"CStudent.h"
#include"CTeacher.h"
#include<iostream>

class CShow
{
public:
	void print_information(CStudent  *s)
	{
		cout << " 学生号: " <<s->Get_iStudent_ID() 
			<< "  姓名: " <<s->Get_sName()
			<< "  性别: " << s->Get_cSex() << endl;
	}

	void print_information(CStudent  &s)
	{
		cout << " 学生号: " <<s.Get_iStudent_ID() 
			<< "  姓名: " <<s.Get_sName()
			<< "  性别: " << s.Get_cSex() << endl;
	}

	void print_information(CTeacher  t)
	{
		cout << " 教师号:" <<t.Get_iTeacher_ID() 
			<< "  姓名: " <<t.Get_sName()
			<< "  性别: " << t.Get_cSex() << endl;
	}


};

#endif 