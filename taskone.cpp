#include "task_one.h"
#include <iostream>
void solve(int a, int b, int c)
{
	double d = double(b * b - 4 * a * c);
	if (d < 0)
	{
		std::cout << "�÷�����ʵ����" << std::endl;
		return;
	}
	double ans = 0;
	if (d == 0)
	{
		ans = b;
		ans *= -1;
		ans /= double(2 * a);
		std::cout << "�÷��̵Ľ�Ϊ" << ans << std::endl;
		return;
	}
	ans = b;
	ans *= -1;
	ans -= sqrt(d);
	ans /= double(2 * a);
	std::cout << "�÷��̵Ľ�Ϊ" << ans << ' ';
	ans = b;
	ans *= -1;
	ans += sqrt(d);
	ans /= double(2 * a);
	std::cout << "��" << ans << std::endl;

}

void swap(int& a, int& b)   //���� swap()�������β��Ǵ�ַ���� 
{
	int tmp = a;
	a = b;
	b = tmp;
}