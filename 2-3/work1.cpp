#include<cmath>
#include<iostream>
#include<algorithm>
#include<cstdio>
#include"work1.h"
#define LL long long
void work1()
{
	LL n;
	std::cout << "--------------------��ҵ1--------------------" << std::endl;
	std::cout << "������Ҫ���쳲��������еĳ���n" << std::endl;
	std::cin >> n;
	LL* a = new LL[n+1];
	if (n >= 1)
	{
		a[1] = 1;
		a[2] = 1;
	}
	else
	{
		std::cout << "�������" << std::endl;
		return;
	}
	for (register int i = 3; i <= n; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	std::cout << "ǰn��Ϊ:";
	for (register int i = 1; i <= n; i++)
	{
		std::cout << a[i] << ' ';
	}
	std::cout << std::endl;
	std::cout << "------------------��ҵ1���------------------" << std::endl<< std::endl<< std::endl;
}