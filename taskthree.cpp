#include "task_three.h"
#include <iostream>
int month[20] = { 0,31,59,90,120,151,181,212,243,273,304,334,365 };
bool check(int y, int m, int d)
{
	if (y % 400 == 0)
	{
		return true;
	}
	else if (y % 4 == 0 && y % 100 != 0)
	{
		return true;
	}
	return false;
}
void getdate(int y, int m, int d)
{
	int ans = 0;
	int z = 0;
	if (m > 2 && check(y,m,d))
	{
		ans += 1;
	}
	ans += month[m - 1] + d;
	if (ans % 7 == 0)
	{
		z = ans / 7;
	}
	else
	{
		z = ceil(ans / 7.0) + 1;
	}
	std::cout << y << "年" << m << "月" << d << "日是该年的第 " << ans << " 天,在该年的第" << z << "周" << std::endl;
}