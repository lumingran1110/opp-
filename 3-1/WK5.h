#ifndef _WK5_   
#define _WK5_
#endif 
class Point
{
private:
	double x;
	double y;
public:
	Point(double xx = 0, double  yy = 0);
	void getCoordinate();
	void set(double xx = 0, double  yy = 0);
	friend double distance(Point a,Point b);
	friend class Segment;
};

