#include "WK2.h"
#include<cstring>
#include<cmath>
#include <algorithm>
#include <iostream>
Mystring::Mystring(char* s)
{
	len = strlen(s);
	for (register int i = 0; i < len; i++)
	{
		st[i] = s[i];
	}
}
void Mystring::add(Mystring s)
{
	for (register int i = 0; i < s.length(); i++)
	{
		st[i + len] = s.st[i];
	}
	len += s.length();
}
bool Mystring::greater(Mystring s)
{
	bool ok = 1;
	int ml = std::max(len, s.length());
	for (register int i = 0; i < ml; i++)
	{
		if (st[i] < s.st[i])
		{
			ok = 0;
			break;
		}
	}
	return ok;
}
void Mystring::sadd(char c, int x)
{
	len++;
	for (register int i = len - 1; i >= x; i--)
	{
		st[i] = st[i - 1];
	}
	st[x - 1] = c;
}
void Mystring::del(int x)
{
	for (register int i = x; i < len; i++)
	{
		st[i - 1] = st[i];
	}
	len--;
}
void Mystring::swap()
{
	int l = len;
	for (register int i = 0; i < len / 2; i++)
	{
		char t = st[i];
		st[i] = st[len - i - 1];
		st[len - i - 1] = t;
	}
}
int Mystring::length()
{
	return len;
}
void Mystring::out()
{
	for (register int i = 0; i < len; i++)
	{
		std::cout << st[i];
	}
}