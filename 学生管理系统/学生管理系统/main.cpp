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
	cout<<"1:�û��޸ĸ�����Ϣ"<<endl;
	cout<<"2:�û����"<<endl;
	cout<<"0:������һ��Ŀ¼"<<endl;
	cout<<"��������Ҫ�Ĺ���:";
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
					cout<<"1:��ǰ�û�����Ϣ�޸�"<<endl;
					cout<<"2:ѧ������Ϣ�޸�"<<endl;
					cout<<"0:������һ��Ŀ¼"<<endl;
					cout<<"��������Ҫ�Ĺ���: ";
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
									cout<<"1:�޸��û���"<<endl;
									cout<<"2:�޸İ༶"<<endl;
									cout<<"3:�޸��Ա�"<<endl;
									cout<<"0:������һ��Ŀ¼"<<endl;
									cout<<"��������Ҫ�Ĺ���: ";
									char n;
									cin>>n;
									switch (n)
									{
									case '1':
										{
											cout<<endl<<"#####################";
											cout<<endl<<"�������û��� : ";
											string name;
											cin>>name;
											tmp->Input_sName(name);
											break;
										}
									case '2':
										{
											cout<<endl<<"#####################";
											cout<<endl<<"������༶ : ";
											int num;
											cin>>num;
											tmp->Input_iClass(num);
											break;
										}
									case '3':
										{
											cout<<endl<<"#####################";
											cout<<endl<<"�������Ա� :";
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
									default:cout<<"��������ָ��"<<endl;
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
									int i = 0;//����ѧ����
									while( j )
									{
										cout<<"*****************"<<endl;
										cout<<"������Ҫ�޸�ѧ�����˺�: ";
										int num;
										cin>>num;
									
										for( ; i<CStudent::Get_number(); i++)
										{
											if(s[i].Get_iStudent_ID() == num)
											{
												cout<<"����ѧ�� "<<endl;
												j = 0;
												break;
											}
										}
										if(j == 1)
										{
											cout<<"û�����˺�,����������"<<endl;
									
										}	
									}
								
									j = 1;
									while (j)
									{

										cout<<"$$$$$$$$$$$$$$$$$$$$"<<endl;
										cout<<"1:�޸��û���"<<endl;
										cout<<"2:�޸İ༶"<<endl;
										cout<<"3:�޸��Ա�"<<endl;
										cout<<"0:������һ��Ŀ¼"<<endl;
										cout<<"��������Ҫ�Ĺ���: ";
										char n;
										cin>>n;
										switch (n)
										{
										case '1':
											{
												cout<<endl<<"#####################";
												cout<<endl<<"�������û��� : ";
												string name;
												cin>>name;
												s[i].Input_sName(name);
												break;
											}
										case '2':
											{
												cout<<endl<<"#####################";
												cout<<endl<<"������༶ : ";
												int num;
												cin>>num;
												s[i].Input_iClass(num);
												break;
											}
										case '3':
											{
												cout<<endl<<"#####################";
												cout<<endl<<"�������Ա� :";
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
										default:cout<<"��������ָ��"<<endl;
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
						default:cout<<"��������ָ��"<<endl;
								break;
					}
				}
				break;
			}
		case '2':
			{
				cout<<"1:ѧ���û�����"<<endl;
				cout<<"2:��ʦ�û�����"<<endl;
				cout<<"0:������һ��Ŀ¼"<<endl;
				cout<<"����������Ҫ�Ĺ���: "<<endl;
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
						default:cout<<"��������ָ��"<<endl;
								break;
							}
					}
		case '0':
			{
							
			}
			default:cout<<"��������ָ��"<<endl;
					break;
		}
	system("pause");

	return 0;

}