#include"CTeacher.h"
#include"CShow.h"
#include"CBackup.h"
#include"CInput.h"
#include"CJudge.h"

int main()
{
	
	CStudent s[5],*tmp=0;
	CTeacher t[2],ttmp;
	CShow show;
	CBackup write;
	CInput in;

	int j = 1;
	int *p = 0;
	write.read_Student(s,s->Get_number());
	CStudent::print_number();

	
	cout<<endl;

	CJudge judge;
	
	judge.Judge_Student_password(s,&tmp,s->Get_number());
	CStudent::print_number();
	
	show.print_information(*tmp);   
	
	cout<<"******************"<<endl;
	cout<<"1:用户修改个人信息"<<endl;
	cout<<"2:用户添加"<<endl;
	cout<<"0:返回上一层目录"<<endl;
	cout<<"请输入需要的功能:";
	char n;
	cin>>n;
	switch (n)
		{
		case '1':
			{
				int y =  1;
				while(y )
				{
					cout<<"*********************"<<endl;
					cout<<"1:当前用户的信息修改"<<endl;
					cout<<"2:学生的信息修改"<<endl;
					cout<<"0:返回上一层目录"<<endl;
					cout<<"请输入需要的功能: ";
					char n;
					cin>>n;
					switch (n)
					{
						case '1':
							{
								int k = 1;
								while (k)
								{
									cout<<"*****************"<<endl;
									cout<<"1:修改用户名"<<endl;
									cout<<"2:修改班级"<<endl;
									cout<<"3:修改性别"<<endl;
									cout<<"0:返回上一层目录"<<endl;
									cout<<"请输入需要的功能: ";
									char n;
									cin>>n;
									switch (n)
									{
									case '1':
										{
											cout<<endl<<"#####################";
											cout<<endl<<"请输入用户名 : ";
											string name;
											cin>>name;
											tmp->Input_sName(name);
											break;
										}
									case '2':
										{
											cout<<endl<<"#####################";
											cout<<endl<<"请输入班级 : ";
											int num;
											cin>>num;
											tmp->Input_iClass(num);
											break;
										}
									case '3':
										{
											cout<<endl<<"#####################";
											cout<<endl<<"请输入性别 :";
											string sex;
											cin>>sex;
											tmp->Input_cSex(sex);
											break;
										}
									case '0':
										{
											k = 0;
											break;
										}
									default:cout<<"输入错误的指令"<<endl;
										break;
									}
								}
								break;
							}
						case '2':
							{
								int k = 1;
								while (k)
								{
									int j = 1;
									int i = 0;//保留学生号
									while( j )
									{
										cout<<"*****************"<<endl;
										cout<<"输入需要修改学生的账号: ";
										int num;
										cin>>num;
									
										for( ; i<CStudent::Get_number(); i++)
										{
											if(s[i].Get_iStudent_ID() == num)
											{
												cout<<"有这学号 "<<endl;
												j = 0;
												break;
											}
										}
										if(j == 1)
										{
											cout<<"没有这账号,请重新输入"<<endl;
									
										}	
									}
								
									j = 1;
									while (j)
									{

										cout<<"$$$$$$$$$$$$$$$$$$$$"<<endl;
										cout<<"1:修改用户名"<<endl;
										cout<<"2:修改班级"<<endl;
										cout<<"3:修改性别"<<endl;
										cout<<"0:返回上一层目录"<<endl;
										cout<<"请输入需要的功能: ";
										char n;
										cin>>n;
										switch (n)
										{
										case '1':
											{
												cout<<endl<<"#####################";
												cout<<endl<<"请输入用户名 : ";
												string name;
												cin>>name;
												s[i].Input_sName(name);
												break;
											}
										case '2':
											{
												cout<<endl<<"#####################";
												cout<<endl<<"请输入班级 : ";
												int num;
												cin>>num;
												s[i].Input_iClass(num);
												break;
											}
										case '3':
											{
												cout<<endl<<"#####################";
												cout<<endl<<"请输入性别 :";
												string sex;
												cin>>sex;
												s[i].Input_cSex(sex);
												break;
											}
										case '0':
											{
												j = 0;
												k = 0;
												break;
											}
										default:cout<<"输入错误的指令"<<endl;
											break;
										}
									
									}	
								}
								break;
							}
						case '0':
							{
								y =  0;
								break;	
							}
						default:cout<<"输入错误的指令"<<endl;
								break;
					}
				}
				break;
			}
		case '2':
			{
				cout<<"1:学生用户增加"<<endl;
				cout<<"2:教师用户增加"<<endl;
				cout<<"0:返回上一层目录"<<endl;
				cout<<"请输入你需要的功能: "<<endl;
				char n;
				cin>>n;
				switch (n)
					{
						case '1':
							{
									
							}
						case '2':
							{
										
							}
						case '0':
							{
								
							}
						default:cout<<"输入错误的指令"<<endl;
								break;
							}
					}
		case '0':
			{
							
			}
			default:cout<<"输入错误的指令"<<endl;
					break;
		}
	system("pause");

	return 0;

}