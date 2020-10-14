#include "task_one.h"
#include <iostream>
void solve(int a, int b, int c)
{
	double d = double(b * b - 4 * a * c);
	if (d < 0)
	{
		std::cout << "该方程无实数解" << std::endl;
		return;
	}
	double ans = 0;
	if (d == 0)
	{
		ans = b;
		ans *= -1;
		ans /= double(2 * a);
		std::cout << "该方程的解为" << ans << std::endl;
		return;
	}
	ans = b;
	ans *= -1;
	ans -= sqrt(d);
	ans /= double(2 * a);
	std::cout << "该方程的解为" << ans << ' ';
	ans = b;
	ans *= -1;
	ans += sqrt(d);
	ans /= double(2 * a);
	std::cout << "和" << ans << std::endl;

}

void swap(int& a, int& b)   //定义 swap()函数，形参是传址调用 
{
	int tmp = a;
	a = b;
	b = tmp;
}