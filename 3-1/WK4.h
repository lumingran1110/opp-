#include <string>
#ifndef _WK4_
#define _WK4_
#endif 
//using namespace std;
class Student
{
private:
	std::string nm;
	bool Gender;
	long long number;
	int y;
	int d;
	int m;
	std::string	address;
	int score[7];
public:
	Student();
	Student(std::string _name,bool g,long long num,int yy,int mm,int dd, std::string add,int x1,int x2,int x3,int x4,int x5,int x6);
	Student(const Student &stu);
	~Student();
	std::string getname();
	std::string getadd();
	bool getGender();
	long long getnum();
	void getbirth();
	void getscore();
};

