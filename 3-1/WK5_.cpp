#include "WK5.h"
#include "WK5_.h"
#include <iostream>
Segment::Segment(Point x, Point y)
{
	a = x;
	b = y;
}
double distance(Point a,Point b)
{
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}