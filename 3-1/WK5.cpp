#include "WK5.h"
#include "WK5_.h"
#include <iostream>
Point::Point(double xx, double yy)
{
	x = xx;
	y = yy;
}
void Point::getCoordinate()
{
	std::cout << "�õ�����Ϊ(" << x << ',' << y << ')' << std::endl;
}
void Point::set(double xx, double yy)
{
	x = xx;
	y = yy;
}
