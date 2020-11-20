#ifndef _WK3_   
#define _WK3_
#endif 
class Triangle
{
private:
	double len[3];//Èý±ß³¤
public:
	Triangle(double a,double b,double c);
	bool check();
	double getlen();
	double getS();
	void gettype();
};

