#include<string>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<cmath>
#include<vector>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
#define LL long long
#define MOD 1000000007
#define PI 3.1415926535898
#define INF 1000055
#define MAXN 1000050
const double EPS = 1e-8;
LL read()
{
	LL x = 0, w = 1;
	char ch = 0;
	while (ch < '0' || ch>'9')
	{
		if (ch == '-')
		{
			w = -1;
		}
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9')
	{
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return w * x;
}
class Base {
public:
	int a;
	void print()
	{
		cout << "a:" << a << "b:" << b << "c:" << c << endl;
	}
	static int statistic()
	{
		return count;
	}
	Base(int x, int y, int z)
	{
		a = x;
		b = y;
		c = z;
		count++;
		cout << "构造函数被调用" << endl;
	}
	~Base()
	{
		cout << "析构函数被调用" << endl;
	}
protected:
	int b;
private:
	int c;
	static int count;
};
int Base::count = 0;
class derived1 :public Base {
public:
	void out()
	{
		cout << "a:" << a << "b:" << b << endl;
		cout << "父类:";
		Base::print();
	}
	derived1(int x, int y, int z) :Base(x, y, z)
	{
		cout << "deriverd1构造函数被调用" << endl;
	}
	~derived1()
	{
		cout << "deriverd1析构函数被调用" << endl;
	}
};
class derived2 :protected Base {
public:
	void out()
	{
		cout << "a:" << a << "b:" << b << endl;
		cout << "父类:";
		Base::print();
	}
	derived2(int x, int y, int z) :Base(x, y, z)
	{
		cout << "deriverd2构造函数被调用" << endl;
	}
	~derived2()
	{
		cout << "deriverd2析构函数被调用" << endl;
	}
};
class derived3 :private Base {
public:
	void out()
	{
		cout << "a:" << a << "b:" << b << endl;
		cout << "父类:";
		Base::print();
	}
	derived3(int x, int y, int z) :Base(x, y, z)
	{
		cout << "deriverd3构造函数被调用" << endl;
	}
	~derived3()
	{
		cout << "deriverd3析构函数被调用" << endl;
	}
};
class derived4 :public derived2 {
public:
	void out()
	{
		cout << "a:" << a << "b:" << b << endl;
		cout << "父类:";
		derived2::out();
	}
	derived4(int x, int y, int z) :derived2(x, y, z)
	{
		cout << "deriverd4构造函数被调用" << endl;
	}
	~derived4()
	{
		cout << "deriverd4析构函数被调用" << endl;
	}
};
class derived5 :public derived3 {
public:
	void out()
	{
		cout << "无可访问成员" << endl;
		cout << "父类:";
		derived3::out();
	}
	derived5(int x, int y, int z) :derived3(x, y, z)
	{
		cout << "deriverd5构造函数被调用" << endl;
	}
	~derived5()
	{
		cout << "deriverd5析构函数被调用" << endl;
	}
};
void work1()
{
	cout << "____________________________________" << endl;
	Base father(1, 2, 3);
	cout << "derived1 s1 公有继承" << endl;
	derived1 s1(4, 5, 6);
	s1.out();
	cout << "derived2 s2 保护继承" << endl;
	derived2 s2(7, 8, 9);
	s2.out();
	cout << "derived3 s3 公有继承" << endl;
	derived3 s3(10, 11, 12);
	s3.out();
	cout << "derived4 ss1 公有继承 derived2:" << endl;
	derived4 ss1(13, 14, 15);
	ss1.out();
	cout << "derived5 ss2 公有继承 derived3:" << endl;
	derived4 ss2(16, 17, 18);
	ss2.out();
	cout << "____________________________________" << endl;
	cout << endl << endl;
}
class Location {
protected:
	int x, y;
public:
	Location(int xx=0, int yy=0)
	{
		x = xx;
		y = yy;
	}
	void trans(int xx, int yy)
	{
		x = xx;
		y = yy;
	}
	void move(int xx, int yy)
	{
		x += xx;
		y += yy;
	}
	void out()
	{
		cout << "x:" << x << " y:" << y << endl;
	}
};
class Point :public Location {
protected:
	int z;
public:
	Point(int xx = 0, int yy = 0, int zz = 0)
	{
		z = zz;
	}
	void trans(int xx, int yy, int zz)
	{
		x = xx;
		y = yy;
		z = zz;
	}
	void move(int xx, int yy, int zz)
	{
		x += xx;
		y += yy;
		z += zz;
	}
	void out()
	{
		cout << "x:" << x << " y:" << y <<" z:"<<z<< endl;
	}
};
class Sphere :public Point {
protected:
	double r;
public:
	Sphere(int xx = 0, int yy = 0, int zz = 0, double rr = 0) :Point(x, y, z)
	{
		x = xx;
		y = yy;
		z = zz;
		r = rr;
	}
	void move(int xx, int yy, int zz)
	{
		x += xx;
		y += yy;
		z += zz;
	}
	void out()
	{
		cout << "x:" << x << " y:" << y << " z:" << z << " r:" << r <<" V:"<<(4.0/3.0*PI*r*r)<< endl;
	}
};
void work2()
{
	cout << "____________________________________" << endl;
	Location a(1, 2);
	a.out();
	cout << "move(-2,1)" << endl;
	a.move(-2, 1);
	a.out();
	cout << endl;
	Point p;
	p.out();
	cout << "move(1,0,-1)" << endl;
	p.move(1, 0, -1);
	p.out();
	cout << endl;
	Sphere s(1, 2, 3, 4.5);
	s.out();
	cout << "move(1,2,3)" << endl;
	s.move(1, 2, 3);
	s.out();
	cout << "____________________________________" << endl;
}
int main()
{
	work1();
	work2();
	return 0;
}
