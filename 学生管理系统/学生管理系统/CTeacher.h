#ifndef Head_CTeacher
#define Head_CTeacher

#include<string>
#include"CStudent.h"

using std::string;

class CTeacher
{
private:
	int iTeacher_ID;
	int iClass;
	string sPassword;
	string cSex;
	string sName;
	static int number;
public:
	CTeacher( int Teacher_Id = 0, string Sex = "ÄÐ",string Name = "noNane"
		    , string Password = "000000", int Class = 1) 
			: iTeacher_ID(Teacher_Id), cSex(Sex), sName(Name)
			, sPassword(Password), iClass(Class) { number++; };

	void Input_iTeacher_ID(int);
	void Input_iClass(int);
	void Input_cSex(string);
	void Input_sName(string);
	void Input_Password(string Password = "0");
	bool Judge_Password(string Password);
	string Get_cSex() const;
	string Get_sName() const;
	int Get_iClass() const;
	int Get_iTeacher_ID() const;
	string Get_Password() const;
	void change_Math(CStudent & s,double);
	void change_Computer(CStudent & s,double);

	static void print_number();
	static int Get_number()
	{
		return number;
	}
};



#endif