#include<cmath>
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>
#include<cstdio>
#include"work3.h"
#define LL long long
void work3()
{
	std::cout << "--------------------��ҵ3--------------------" << std::endl;
	std::cout << "Ferguson������Ϸ:" << std::endl;
	std::cout << "��Ϸ����" << std::endl;
	std::cout << "������Ϸ��Ҫ�õ��������ӣ�����Ϸ�Ŀ�ʼ����һ����������n��ʯ�ӣ��ڶ�����������m��ʯ��(n, m > 0)��" << std::endl;
	std::cout << "������Ϸ�������������ִ�������Ĳ��������һ�������е�ʯ�ӣ�Ȼ�����һ��������������ʯ�ӵ�����յĺ����У�ʹ������������Ӷ����ա� " << std::endl;
	std::cout << "���������Ӷ�ֻ��һ��ʯ�ӵ�ʱ�����һ����������Ӯ������˵��һ���޷����������䣩" << std::endl;
	std::cout << "SLY��������һ�������������Ϸ��Ϊ�˱�ʾ�Ѻã�SLY������������" << std::endl;
	std::cout << std::endl << std::endl;
	srand(time(NULL));//��ʼ��ʱ������
	while (1)
	{
		std::cout << "��Ϸ��ʼ" << std::endl;
		int a, b, x;
		a = rand() % 20 + 2;
		b = rand() % 20 + 2;
		while (1)
		{
			std::cout << std::endl << "��Ļغϣ�" << std::endl;
			std::cout << "���ڵ�1����������" << a << "��ʯ�ӣ���2����������" << b << "��ʯ��" << std::endl;
			std::cout << "��ѡ����Ҫ��յĺ���" << std::endl;
			int f = 0;
			std::cin >> f;
			if (f == 1)
			{
				std::cout << "��������Ҫ�����ٸ�ʯ�������1������" << std::endl;
				std::cin >> x;
				if (b - x <= 0 || x <= 0)
				{
					std::cout << "Υ����������룬������" << std::endl;
					break;
				}
				b = b - x;
				a = x;
				std::cout << "���ڵ�1����������" << a << "��ʯ�ӣ���2����������" << b << "��ʯ��" << std::endl;
				if (a == 1 && b == 1)
				{
					std::cout << "��ϲ����Ӯ�ˣ�" << std::endl;
					break;
				}

			}
			else
			{
				std::cout << "��������Ҫ�����ٸ�ʯ�������2������" << std::endl;
				std::cin >> x;
				if (a - x <= 0 || a <= 0)
				{
					std::cout << "Υ����������룬������" << std::endl;
					break;
				}
				a = a - x;
				b = x;
				std::cout << "���ڵ�1����������" << a << "��ʯ�ӣ���2����������" << b << "��ʯ��" << std::endl;
				if (a == 1 && b == 1)
				{
					std::cout << "��ϲ����Ӯ�ˣ�" << std::endl;
					break;
				}

			}
			std::cout << std::endl << "SLY�Ļغϣ�" << std::endl;
			std::cout << "���ڵ�1����������" << a << "��ʯ�ӣ���2����������" << b << "��ʯ��" << std::endl;
			if (a % 2 == 0)
			{
				std::cout << "SLYѡ����յ�2�����ӣ�" << std::endl;
				int xx;
				while (1)
				{
					xx = rand() % a + 1;
					if (xx % 2 && (a - xx) % 2)
					{
						break;
					}
				}
				std::cout << "SLYѡ�񽫵�1�������е�" << xx << "��ʯ�������2������" << std::endl;
				a = a - xx;
				b = xx;
				std::cout << "���ڵ�1����������" << a << "��ʯ�ӣ���2����������" << b << "��ʯ��" << std::endl;
				if (a == 1 && b == 1)
				{
					std::cout << "SLYӮ�ˣ�" << std::endl;
					break;
				}
			}
			else
			{
				if (b % 2 == 0)
				{
					std::cout << "SLYѡ����յ�1�����ӣ�" << std::endl;
					int xx;
					while (1)
					{
						xx = rand() % b + 1;
						if (xx % 2 && (b - xx) % 2)
						{
							break;
						}
					}
					std::cout << "SLYѡ�񽫵�2�������е�" << xx << "��ʯ�������1������" << std::endl;
					a = xx;
					b = b - xx;
					std::cout << "���ڵ�1����������" << a << "��ʯ�ӣ���2����������" << b << "��ʯ��" << std::endl;
					if (a == 1 && b == 1)
					{
						std::cout << "SLYӮ�ˣ�" << std::endl;
						break;
					}
				}
				else
				{
					if (b > 1)
					{
						std::cout << "SLYѡ����յ�1�����ӣ�" << std::endl;
						int xx = rand() % b + 1;
						std::cout << "SLYѡ�񽫵�2�������е�" << xx << "��ʯ�������1������" << std::endl;
						a = xx;
						b = b - xx;
					}
					else
					{
						std::cout << "SLYѡ����յ�2�����ӣ�" << std::endl;
						int xx = rand() % a + 1;
						std::cout << "SLYѡ�񽫵�1�������е�" << xx << "��ʯ�������2������" << std::endl;
						b = xx;
						a = a - xx;
					}
					std::cout << "���ڵ�1����������" << a << "��ʯ�ӣ���2����������" << b << "��ʯ��" << std::endl;
				}
			}
		}
		std::cout << std::endl << std::endl << "����1���¿�ʼ������2������Ϸ" << std::endl;
		std::cin >> x;
		if (x == 2)
		{
			break;
		}


	}

	std::cout << "------------------��ҵ3���------------------" << std::endl << std::endl << std::endl;
}