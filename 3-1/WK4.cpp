#include "WK4.h"
#include <iostream>
//using namespace std;
Student::Student()
{
	std::string s = "";
	nm = s;
	Gender = 1;
	number = 0;
	y = 0;
	m = 0;
	d = 0;
	address = s;
	for (register int i = 1; i <= 6; i++)
	{
		score[i] = 0;
	}
}
Student::Student(std::string _name,bool g, long long num, int yy, int mm, int dd, std::string add, int x1, int x2, int x3, int x4, int x5, int x6)
{
	nm = _name;
	Gender = g;
	number = num;
	y = yy;
	m = mm;
	d = dd;
	address = add;
	score[1] = x1;
	score[2] = x2;
	score[3] = x3;
	score[4] = x4;
	score[5] = x5;
	score[6] = x6;
}
Student::Student(const Student& stu)
{
	nm = stu.nm;
	Gender = stu.Gender;
	number = stu.number;
	y = stu.y;
	m = stu.m;
	d = stu.d;
	address = stu.address;
	for (register int i = 1; i <= 6; i++)
	{
		score[i] = stu.score[i];
	}
}
Student::~Student()
{
	std::cout << "析构函数已被调用" << std::endl;
}
std::string Student::getname()
{
	return nm;
}
std::string Student::getadd()
{
	return address;
}
bool Student::getGender()
{
	return Gender;
}
long long Student::getnum()
{
	return number;
}
void Student::getbirth()
{
	std::cout << y << "年" << m << "月" << d << "日" << std::endl;
}
void Student::getscore()
{

	std::cout << "该学生的成绩为";
	for (register int i = 1; i <= 6; i++)
	{
		std::cout << score[i] << ' ';
	}
	std::cout << std::endl;
}