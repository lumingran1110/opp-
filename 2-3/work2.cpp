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
	std::cout << "--------------------��ҵ2--------------------\n" << std::endl;
	double a, b, xx, yy;
	double eps = 0.000001;
	srand(time(NULL));//��ʼ��ʱ������
	std::cout << "������y = ax + b�е�a, b" << std::endl;
	std::cin >> a >> b;
	if (a == 0)
	{
		std::cout << "�ú����޸�" << std::endl;
		return;
	}
	bool ok = 1;
	double& x = xx;
	double& y = yy;//ǿ������=.=
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
	std::cout << "�÷��̵Ľ���" << (x + y) * 0.5 << std::endl;
	std::cout << "------------------��ҵ2���------------------" << std::endl << std::endl << std::endl;
}