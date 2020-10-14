#include "task_two.h"
#include <iostream>
void get_s(double x, double y, double z)
{
	const double* xx = &x;
	const double* yy = &y;
	const double* zz = &z;
	double p = 0;
	double s = 0;
	if (*xx + *yy < *zz || *xx + *zz < *yy || *yy + *zz < *xx)
	{
		std::cout << "输入错误" << std::endl;
		return;
	}
	p = (*xx + *yy + *zz) / 2;                 //求出p的值
	s = sqrt(p * (p - *xx) * (p - *yy) * (p - *zz));     //根据p求面面积，sqrt是开方函数
	printf("该三角形的面积为：%0.3lf\n", s);          //输出面积，0.3f按实际位数输出，保留3位小数

}