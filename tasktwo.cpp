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
		std::cout << "�������" << std::endl;
		return;
	}
	p = (*xx + *yy + *zz) / 2;                 //���p��ֵ
	s = sqrt(p * (p - *xx) * (p - *yy) * (p - *zz));     //����p���������sqrt�ǿ�������
	printf("�������ε����Ϊ��%0.3lf\n", s);          //��������0.3f��ʵ��λ�����������3λС��

}