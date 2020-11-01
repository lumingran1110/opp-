#include<cmath>
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<ctime>
#include<cstdlib>
#include "work1.h"
#include "work2.h"
#include "work3.h"
using namespace std;
#define LL long long
#define MOD 1000000007
#define MAXN 100050
const int N = 100007;
LL read()
{
	LL w = 1, x = 0;
	char ch = 0;
	while (ch < '0' || ch>'9')
	{
		if (ch == '-')
			w = -1;
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9')
	{
		x = x * 10 + (ch - '0');
		ch = getchar();
	}
	return w * x;
}
int main()
{
	work1();
	work2();
	work3();
	return 0;
}
