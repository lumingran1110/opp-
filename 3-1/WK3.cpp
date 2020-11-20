#include "WK3.h"
#include <algorithm>
#include <iostream>
Triangle::Triangle(double a,double b,double c)
{
	len[0] = a;
	len[1] = b;
	len[2] = c;
}
bool Triangle::check()
{
	std::sort(len, len + 3);
	if (len[2] >= len[1] + len[0] || len[0] <= 0)
	{
		return 0;
	}
	return 1;
}
double Triangle::getlen()
{
	return len[0] + len[1] + len[2];
}
double Triangle::getS()
{
	double p = getlen()/ 2;                 //求出p的值
	double s = sqrt(p * (p - len[0]) * (p - len[1]) * (p - len[2]));     //根据p求面面积，sqrt是开方函数
	return s;
}
void Triangle::gettype()
{
	std::sort(len, len + 3);
	if (len[2] * len[2] > len[0] * len[0] + len[1] * len[1])
	{
		std::cout << "该三角形是钝角三角形" << std::endl;
	}
	else
	{
		if (len[2] * len[2] == len[0] * len[0] + len[1] * len[1])
		{
			std::cout << "该三角形是直角三角形" << std::endl;
		}
		else
		{
			std::cout << "该三角形是锐角三角形" << std::endl;
		}
	}
}