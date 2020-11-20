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
	std::cout << "该点坐标为(" << x << ',' << y << ')' << std::endl;
}
void Point::set(double xx, double yy)
{
	x = xx;
	y = yy;
}
