#include<string>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<cmath>
#include <fstream>
#include <sstream>
#include<vector>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include "task_one.h"
#include "task_two.h"
#include "task_three.h"
using namespace std;
#define LL long long
#define MOD 998244353
#define PI 3.1415926535898
#define INF 0x3f3f3f3f
#define MAXN 80000080
const double EPS = 1e-8;
ifstream input("data.txt");
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
int main()
{
	cout << "������������������ʵ��һ��������������������" << endl;
	cout << "�������Ԫһ�η������ϵ�� a b c" << endl;
	int x, y, z;
	x = read();
	y = read();
	z = read();
	solve(x, y, z);
	cout << "������Ҫ������������x y" << endl;
	x = read();
	y = read();
	cout << "x=" << x << " y=" << y << endl;
	swap(x, y);
	cout << "������" << endl;
	cout << "x=" << x << " y=" << y << endl;
	cout << endl << endl << endl;
	cout << "������������������ʵ�����������������������" << endl;
	double a, b, c;
	cout << "�����������ε�����a b c�ĳ���" << endl;
	cin >> a >> b >> c;
	get_s(a, b, c);
	cout << endl << endl << endl;
	cout << "������������������ʵ������������������������" << endl;
	cout << "������Ҫ��ѯ��������" << endl;
	x = read();
	y = read();
	z = read();
	getdate(x, y, z);
	return 0;
}