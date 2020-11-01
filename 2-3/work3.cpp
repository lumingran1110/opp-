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
	std::cout << "--------------------作业3--------------------" << std::endl;
	std::cout << "Ferguson博弈游戏:" << std::endl;
	std::cout << "游戏规则：" << std::endl;
	std::cout << "进行游戏需要用到两个盒子，在游戏的开始，第一个盒子中有n个石子，第二个盒子中有m个石子(n, m > 0)。" << std::endl;
	std::cout << "参与游戏的两名玩家轮流执行这样的操作：清空一个盒子中的石子，然后从另一个盒子中拿若干石子到被清空的盒子中，使得最后两个盒子都不空。 " << std::endl;
	std::cout << "当两个盒子都只有一个石子的时候，最后一个操作的人赢（或者说第一个无法操作的人输）" << std::endl;
	std::cout << "SLY邀请你来一起玩这个博弈游戏，为了表示友好，SLY决定让你先手" << std::endl;
	std::cout << std::endl << std::endl;
	srand(time(NULL));//初始化时间种子
	while (1)
	{
		std::cout << "游戏开始" << std::endl;
		int a, b, x;
		a = rand() % 20 + 2;
		b = rand() % 20 + 2;
		while (1)
		{
			std::cout << std::endl << "你的回合：" << std::endl;
			std::cout << "现在第1个盒子中有" << a << "个石子，第2个盒子中有" << b << "个石子" << std::endl;
			std::cout << "请选择你要清空的盒子" << std::endl;
			int f = 0;
			std::cin >> f;
			if (f == 1)
			{
				std::cout << "请输入你要将多少个石子移入第1个盒子" << std::endl;
				std::cin >> x;
				if (b - x <= 0 || x <= 0)
				{
					std::cout << "违反规则的输入，你输了" << std::endl;
					break;
				}
				b = b - x;
				a = x;
				std::cout << "现在第1个盒子中有" << a << "个石子，第2个盒子中有" << b << "个石子" << std::endl;
				if (a == 1 && b == 1)
				{
					std::cout << "恭喜，你赢了！" << std::endl;
					break;
				}

			}
			else
			{
				std::cout << "请输入你要将多少个石子移入第2个盒子" << std::endl;
				std::cin >> x;
				if (a - x <= 0 || a <= 0)
				{
					std::cout << "违反规则的输入，你输了" << std::endl;
					break;
				}
				a = a - x;
				b = x;
				std::cout << "现在第1个盒子中有" << a << "个石子，第2个盒子中有" << b << "个石子" << std::endl;
				if (a == 1 && b == 1)
				{
					std::cout << "恭喜，你赢了！" << std::endl;
					break;
				}

			}
			std::cout << std::endl << "SLY的回合：" << std::endl;
			std::cout << "现在第1个盒子中有" << a << "个石子，第2个盒子中有" << b << "个石子" << std::endl;
			if (a % 2 == 0)
			{
				std::cout << "SLY选择清空第2个盒子！" << std::endl;
				int xx;
				while (1)
				{
					xx = rand() % a + 1;
					if (xx % 2 && (a - xx) % 2)
					{
						break;
					}
				}
				std::cout << "SLY选择将第1个盒子中的" << xx << "个石子移入第2个盒子" << std::endl;
				a = a - xx;
				b = xx;
				std::cout << "现在第1个盒子中有" << a << "个石子，第2个盒子中有" << b << "个石子" << std::endl;
				if (a == 1 && b == 1)
				{
					std::cout << "SLY赢了！" << std::endl;
					break;
				}
			}
			else
			{
				if (b % 2 == 0)
				{
					std::cout << "SLY选择清空第1个盒子！" << std::endl;
					int xx;
					while (1)
					{
						xx = rand() % b + 1;
						if (xx % 2 && (b - xx) % 2)
						{
							break;
						}
					}
					std::cout << "SLY选择将第2个盒子中的" << xx << "个石子移入第1个盒子" << std::endl;
					a = xx;
					b = b - xx;
					std::cout << "现在第1个盒子中有" << a << "个石子，第2个盒子中有" << b << "个石子" << std::endl;
					if (a == 1 && b == 1)
					{
						std::cout << "SLY赢了！" << std::endl;
						break;
					}
				}
				else
				{
					if (b > 1)
					{
						std::cout << "SLY选择清空第1个盒子！" << std::endl;
						int xx = rand() % b + 1;
						std::cout << "SLY选择将第2个盒子中的" << xx << "个石子移入第1个盒子" << std::endl;
						a = xx;
						b = b - xx;
					}
					else
					{
						std::cout << "SLY选择清空第2个盒子！" << std::endl;
						int xx = rand() % a + 1;
						std::cout << "SLY选择将第1个盒子中的" << xx << "个石子移入第2个盒子" << std::endl;
						b = xx;
						a = a - xx;
					}
					std::cout << "现在第1个盒子中有" << a << "个石子，第2个盒子中有" << b << "个石子" << std::endl;
				}
			}
		}
		std::cout << std::endl << std::endl << "输入1重新开始，输入2结束游戏" << std::endl;
		std::cin >> x;
		if (x == 2)
		{
			break;
		}


	}

	std::cout << "------------------作业3完成------------------" << std::endl << std::endl << std::endl;
}