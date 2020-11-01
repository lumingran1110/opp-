#include<cmath>
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>
#include<cstdio>
#include"work2.h"
#define LL long long
void work2()
{
	std::cout << "--------------------作业2--------------------\n" << std::endl;
	double a, b, xx, yy;
	double eps = 0.000001;
	srand(time(NULL));//初始化时间种子
	std::cout << "请输入y = ax + b中的a, b" << std::endl;
	std::cin >> a >> b;
	if (a == 0)
	{
		std::cout << "该函数无根" << std::endl;
		return;
	}
	bool ok = 1;
	double& x = xx;
	double& y = yy;//强行引用=.=
	while (ok)
	{
		int aa = rand();
		int bb = rand();
		bb = bb * -1;
		if (aa > bb)
		{
			std::swap(aa, bb);
		}
		x = aa;
		y = bb;
		if ((x * a + b) * (y * a + b) < 0)
		{
			while (y - x > eps)
			{
				double mid = (x + y) * 0.5;
				if ((x * a + b) * (mid * a + b) < 0)
				{
					y = mid;
				}
				else
				{
					x = mid;
				}
			}
			ok = 0;
		}

	}
	std::cout << "该方程的解是" << (x + y) * 0.5 << std::endl;
	std::cout << "------------------作业2完成------------------" << std::endl << std::endl << std::endl;
}