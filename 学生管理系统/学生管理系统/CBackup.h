#ifndef Header_CBackup
#define Header_CBackup

#include<fstream>
#include<iostream>

#include"CStudent.h"
#include"CTeacher.h"
#include"CShow.h"


using namespace std;

class CBackup
{
public:
	void write(CStudent s[],int);
	void write(CTeacher t[],int);
	void read_Student(int);
	void read_Teacher(int);
	void read_Student(CStudent tmp[],int iN );
	void read_Teacher(CTeacher [], int );
};


void CBackup::write(CStudent s[],int iN)
{
	
	ofstream stu;
	
	stu.open("d:\\student.txt",ios::trunc); 
	if ( !stu )
	{
		cout<<"不可以打开学生文件"<<endl; 
		system("pause");
		exit(1);
	}
	for(int i=0; i < iN; i++)
	{
		stu<<s[i].Get_iStudent_ID()<<" "<<s[i].Get_cSex()
		<<"  "<<s[i].Get_sName()<<" "
		<<s[i].Get_Password()<<"  "<<s[i].Get_iClass()
		<<"  "<<s[i].Get_dMath()<<"  "<<s[i].Get_dCompuer()<<endl;
	}
	stu.close();
}

void CBackup::write(CTeacher t[],int iN)
{
	
	ofstream TC;
	
	TC.open("d:\\teacher.txt",ios::trunc); 
	if ( !TC )
	{
		cout<<"不可以打开学生文件"<<endl; 
		system("pause");
		exit(1);
	}
	for(int i=0; i < iN; i++)
	{
		TC<<t[i].Get_iTeacher_ID()<<" "<<t[i].Get_cSex()
			<<"  "<<t[i].Get_sName()<<" "
			<<t[i].Get_Password()<<"  "<<t[i].Get_iClass()
		<<endl;
	}
	TC.close();
}

void CBackup::read_Teacher(int iN)
{
	ifstream in;
	in.open("d:\\teacher.txt"); 
	if ( !in )
	{
		cout<<"不可以打开老师文件"<<endl; 
		system("pause");
		exit(1);
	}
	
	CShow show;

	CTeacher *TC_out =new  CTeacher[iN]; 

	for(int i=0; i < iN; i++)
	{
	int iTeacher_ID;
	string cSex;
	string sName;
	string sPassword;
	int iClass;
	

	in>>iTeacher_ID>>cSex>>sName>>sPassword>>iClass;
	
	TC_out[i].Input_cSex(cSex);
	TC_out[i].Input_iTeacher_ID(iTeacher_ID);
	TC_out[i].Input_sName(sName);
	TC_out[i].Input_Password(sPassword);
	TC_out[i].Input_iClass(iClass);
	show.print_information(TC_out[i]);
	}
	
	delete [] TC_out;

}

void CBackup::read_Student(int iN )
{
	ifstream in;
	in.open("d:\\student.txt"); 
	if ( !in )
	{
		cout<<"不可以打开学生文件"<<endl; 
		system("pause");
		exit(1);
	}
	
	CShow show;

	CStudent *stu_out =new  CStudent[iN]; 

	for(int i=0; i < iN; i++)
	{
	int iStudent_ID;
	string cSex;
	string sName;
	string sPassword;
	int iClass;
	double dComputer;
	double dMath;

	in>>iStudent_ID>>cSex>>sName>>sPassword>>iClass>>dComputer>>dMath;
	
	stu_out[i].Input_cSex(cSex);
	stu_out[i].Input_iStudent_ID(iStudent_ID);
	stu_out[i].Input_sName(sName);
	stu_out[i].Input_dMath(dMath);
	stu_out[i].Input_Password(sPassword);
	stu_out[i].Input_dComputer(dComputer);
	stu_out[i].Input_iClass(iClass);
	stu_out[i].Print_Subject();
	show.print_information(stu_out[i]);
	}
	
	delete [] stu_out;
}

void CBackup::read_Student(CStudent tmp[],int iN )
{
	ifstream in;
	in.open("d:\\student.txt"); 
	if ( !in )
	{
		cout<<"不可以打开学生文件"<<endl; 
		system("pause");
		exit(1);
	}
	
	for(int i=0; i < iN; i++)
	{
	int iStudent_ID;
	string cSex;
	string sName;
	string sPassword;
	int iClass;
	double dComputer;
	double dMath;

	in>>iStudent_ID>>cSex>>sName>>sPassword>>iClass>>dComputer>>dMath;
	
	tmp[i].Input_cSex(cSex);
	tmp[i].Input_iStudent_ID(iStudent_ID);
	tmp[i].Input_sName(sName);
	tmp[i].Input_dMath(dMath);
	tmp[i].Input_Password(sPassword);
	tmp[i].Input_dComputer(dComputer);
	tmp[i].Input_iClass(iClass);

	}
}

void CBackup::read_Teacher(CTeacher tmp[],int iN )
{
	ifstream in;
	in.open("d:\\teacher.txt"); 
	if ( !in )
	{
		cout<<"不可以打开老师文件"<<endl; 
		system("pause");
		exit(1);
	}
	
	for(int i=0; i < iN; i++)
	{
	int iStudent_ID;
	string cSex;
	string sName;
	string sPassword;
	int iClass;
	

	in>>iStudent_ID>>cSex>>sName>>sPassword>>iClass;
	
	tmp[i].Input_cSex(cSex);
	tmp[i].Input_iTeacher_ID(iStudent_ID);
	tmp[i].Input_sName(sName);
	tmp[i].Input_Password(sPassword);
	tmp[i].Input_iClass(iClass);

	}
	
}
#endif