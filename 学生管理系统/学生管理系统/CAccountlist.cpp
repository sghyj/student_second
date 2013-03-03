#include"CAccountlist.h"
#include<iostream>

void CAccountlist::add(CStudent & a)
{
	CNode *pN = new CNode(a);
	if(head == NULL)
	{
		head = pN;
		tail = pN;
		size++;
	}else{
		tail->next = pN;
		tail = pN;
		size++;
	}
	tail->next = NULL;
}

void CAccountlist::remove(int iStudent_ID)
{
	CStudent a(iStudent_ID);
	CNode * cur, * curpre;
	for( curpre = head,cur = curpre->next; cur ; cur = cur->next, curpre = curpre->next)
	{
		
		if( (*curpre == CNode(a)) && (curpre == head) )
		{
			head = head->next;
			size--;
			delete curpre;
			break;
		
		}

		if( *cur == CNode(a) )
		{
		
			if(cur == tail )
			{
				curpre->next = NULL;
			}else{
				curpre->next = cur->next;
			}
				
			delete cur;
			size--;
			break;
		}

	}

	std::cout<<"没有你输入的学号"<<std::endl;
}

CStudent * CAccountlist::find(int iStudent_ID)
{
	CStudent a(iStudent_ID);
	for(CNode *cur = head; cur; cur = cur->next)
	{
		if(*cur == CNode(a))
		{
			return &cur->stu;
		}
	}
	cout<<"没有这个学号"<<endl;
	return NULL;
}

void CAccountlist::display() const
{
	std::cout<<"There are "<<size<<" student"<<std::endl;
	for(CNode *cur = head ; cur;  cur = cur->next)
	{
		std::cout<<cur->stu.Get_iStudent_ID()<<std::endl;
	}
}

CAccountlist::~CAccountlist()
{
	for(CNode * cur = head, *p = cur; cur ;delete p)
	{
		p = cur;
		cur = cur->next;
	}
}