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
LL m, a, b, c;
double maxs, maxl, ansx, ansy, ansz, ansxx, ansyy, anszz;

bool cmp(double x, double y)
{
	return x > y;
}
bool check(double x, double y, double z)
{
	return ((x < y + z) && (x - y < z));

}
double get_s(double x, double y, double z)
{
	const double* xx = &x;
	const double* yy = &y;
	const double* zz = &z;
	double p = 0;
	double s = 0;
	p = (*xx + *yy + *zz) / 2;
	s = sqrt(p * (p - *xx) * (p - *yy) * (p - *zz));//计算面积 
	return s;
}
void solve(double x, double y, double z)
{
	if (maxs < get_s(x, y, z))//记录答案 
	{
		maxs = get_s(x, y, z);
		ansxx = x;
		ansyy = y;
		anszz = z;
	}
}
int main()
{
	cout << "m = ";
	m = read();
	double *l=new double(m+7);//开数组 
	cout << "L = ";
	for (register int i = 1; i <= m; i++)
	{
		cin >> l[i];
	}
	sort(l + 1, l + m + 1, cmp);//按照边从大到小排序 
	a = 1;//初始化三角形三边下标 
	b = 2;
	c = 3;
	bool ok = 0;
	while (c <= m)
	{
		if (check(l[a], l[b], l[c]))//是否能构成三角形 
		{
			ok = 1;//ok==1代表有能构成三角形的三条边 
			if (l[a] + l[b] + l[c] > maxl)//计算周长，记录答案 
			{
				ansx = l[a];
				ansy = l[b];
				ansz = l[c];
				maxl = ansx + ansy + ansz;
			}
			solve(l[a], l[b], l[c]);//面积 
		}
		a++;//遍历 
		b++;
		c++;
	}
	delete l; 
	if (ok)
	{
		cout << "最大周长" << maxl << "（选择" << ansx << ',' << ansy << ',' << ansz << ')' << endl;
		cout << "最大面积" << maxs << "（选择" << ansxx << ',' << ansyy << ',' << anszz << ')' << endl;
	}
	else
	{
		cout << 0 << endl;//没有能构成三角形的三条边，输出0 
	}
	return 0;
}
