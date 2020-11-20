#include "WK1.h"
Stack::Stack()
{
	tp = 0;
}
void Stack::mem()
{
	tp = 0;
}
bool Stack::full()
{
	if (tp == 1050)
		return 1;
	return 0;
}
bool Stack::empty()
{
	if (tp == 0)
		return 1;
	return 0;
}
bool Stack::pop()
{
	if (!empty())
	{
		tp--;
		return 1;
	}
	return 0;
}
bool Stack::push(int x)
{
	if (!full())
	{
		st[tp++] = x;
		return 1;
	}
	else
	{
		return 0;
	}
}
int Stack::size()
{
	return tp;
}
int Stack::top()
{
	return st[tp-1];
}