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
		cout << " ѧ����: " <<s->Get_iStudent_ID() 
			<< "  ����: " <<s->Get_sName()
			<< "  �Ա�: " << s->Get_cSex() << endl;
	}

	void print_information(CStudent  &s)
	{
		cout << " ѧ����: " <<s.Get_iStudent_ID() 
			<< "  ����: " <<s.Get_sName()
			<< "  �Ա�: " << s.Get_cSex() << endl;
	}

	void print_information(CTeacher  t)
	{
		cout << " ��ʦ��:" <<t.Get_iTeacher_ID() 
			<< "  ����: " <<t.Get_sName()
			<< "  �Ա�: " << t.Get_cSex() << endl;
	}


};

#endif 