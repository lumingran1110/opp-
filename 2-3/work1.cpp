#include<cmath>
#include<iostream>
#include<algorithm>
#include<cstdio>
#include"work1.h"
#define LL long long
void work1()
{
	LL n;
	std::cout << "--------------------作业1--------------------" << std::endl;
	std::cout << "请输入要求的斐波那契序列的长度n" << std::endl;
	std::cin >> n;
	LL* a = new LL[n+1];
	if (n >= 1)
	{
		a[1] = 1;
		a[2] = 1;
	}
	else
	{
		std::cout << "输入错误" << std::endl;
		return;
	}
	for (register int i = 3; i <= n; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	std::cout << "前n项为:";
	for (register int i = 1; i <= n; i++)
	{
		std::cout << a[i] << ' ';
	}
	std::cout << std::endl;
	std::cout << "------------------作业1完成------------------" << std::endl<< std::endl<< std::endl;
}