#ifndef Header_CAccountlist
#define Header_CAccountlist

#include"CStudent.h"

class CNode
{
public:
	CStudent & stu;
	CNode * next;
	CNode(CStudent & a) :  stu(a), next(NULL){}  
	bool operator == (const CNode & n) const 
	{
		return this->stu.Get_iStudent_ID() == n.stu.Get_iStudent_ID();
	}
};

class CAccountlist
{
	int size;
	CNode * head;
	CNode * tail;

public:
	CAccountlist (): head(NULL), tail (NULL), size(0){};
	CNode * GetHead () const { return head; }
	int GetSize() const { return size; }
	void add(CStudent & a);
	void remove(int iStudent_ID);
	CStudent * find (int iStudent_ID);
	bool isEmpty() const {return !size; };
	void display() const;
	~CAccountlist();
};

#endif