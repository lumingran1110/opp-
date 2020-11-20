#ifndef _WK5__   
#define _WK5__
#endif 
#include <iostream>
class Segment
{
private:
	Point a;
	Point b;
public:
	Segment(Point x, Point y);
	double length()
	{
		return sqrt((a.x - b.x)* (a.x - b.x)+ (a.y - b.y)* (a.y - b.y));
	}
};

