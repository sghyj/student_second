#ifndef Head_CStudent
#define Head_CStudent

#include<string>

using namespace std;
class CTeacher;
class CStudent
{
private:
	int iStudent_ID;
	string cSex;
	string sName;
	string sPassword;
	int iClass;
	double dComputer;
	double dMath;
	

public:
	CStudent * nest;

	CStudent( int iStu_id , string Sex ,string Name 
		    , string Password = "000000", int Class = 1
			, double Computer = 0.0 , double Math = 0.0
			) : iStudent_ID(iStu_id), cSex(Sex),
			sName(Name), sPassword(Password)
			, iClass(Class),  dComputer(Computer),
			dMath(Math) {   };

	CStudent(int i):iStudent_ID(i) {}

	CStudent(){ };

	CStudent(const CStudent & other)
	{
		this->iStudent_ID = other.iStudent_ID;
		this->cSex = other.cSex;
		this->dComputer = other.dComputer;
		this->dMath  = other.dMath;
		this->iClass = other.iClass;
		this->sName = other.sName;
		this->sPassword  = other.sPassword;
		
	}

	~CStudent(){  }

	void Input_Password(string Password = "0");
	string Get_Password() const;
	bool Judge_Password(string Password);
	void Print_Subject() const;	
	void Input_cSex(string);
	void Input_iStudent_ID(int);
	void Input_iClass(int );
	void Input_dComputer(double);
	void Input_sName(string);
	void Input_dMath(double);
	double Get_dCompuer() const;
	double Get_dMath() const;
	string Get_cSex() const;
	string Get_sName() const;
	int Get_iClass() const;
	int Get_iStudent_ID() const;
	
	friend class CTeacher;
};



#endif