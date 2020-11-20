#ifndef _WK2_   
#define _WK2_
#endif 
class Mystring
{
public:
	char st[1005];
	int len;
public:
	Mystring(char *s);
	void add(Mystring s);
	bool greater(Mystring s);
	void sadd(char c, int x);
	void del(int x);
	void swap();
	int length();
	void out();
};