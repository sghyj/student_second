#ifndef Header_CJudge
#define Header_CJudge

#include"CStudent.h"
#include"CTeacher.h"
#include<iostream>
#include"CShow.h"

class CJudge
{
public:
	void Judge_Student_password(CStudent [],CStudent **,int);
	void Judge_Teacher_password(CTeacher [],CTeacher **,int);
};



void CJudge::Judge_Teacher_password(CTeacher t[], CTeacher **tmp, int iN)
{
	int num;
	string password;
	std::cout<<"请输入账号名"<<endl;
	cin>>num;
	
	 int j = 0;
	for(int i=0; i<iN; i++)
	{
		if(num == t[i].Get_iTeacher_ID())
		{
			for(int k=0; k<3; k++)
			{
				cout<<"请输入密码"<<endl;
				cin>>password;
				if( t[i].Judge_Password(password ) )
				{
					j = 1;
					*tmp = &t[i];
					break;
				}else{
					cout<<"密码错误,你还有"<<2 - k<<"次机会"<<endl;
				}
				if(k  == 2)
				{
					system("pause");
					exit(0);
				}
			}
		}	
	}
	if (j == 0)
		{
			cout<<"没有此账号 ,请重新登入查询 "<<endl;
			system("pause");
			exit(0);
		}
}

void CJudge::Judge_Student_password(CStudent s[], CStudent **tmp, int iN)
{
	int num;
	string password;
	std::cout<<"请输入账号名"<<endl;
	cin>>num;
	

	int j = 0;
	for(int i=0; i<iN; i++)
	{
		if(num == s[i].Get_iStudent_ID())
		{
			for(int k=0; k<3; k++)
			{
				cout<<"请输入密码"<<endl;
				cin>>password;
				if( s[i].Judge_Password(password ) )
				{
					j = 1;
					*tmp = &s[i];
					break;
				}else{
					cout<<"密码错误,你还有"<<2 - k<<"次机会"<<endl;
				}
				if(k  == 2)
				{
					system("pause");
					exit(0);
				}
			}
		}	
	}
	if (j == 0)
		{
			cout<<"没有此账号 ,请重新登入查询 "<<endl;
			system("pause");
			exit(0);
		}
	
}
#endif