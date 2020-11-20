#ifndef _WK1_   
#define _WK1_
#endif 

class Stack
{
private:
	int st[1050];
	int tp;
public:
	Stack();
	void mem();
	bool full();
	bool empty();
	bool push(int x);
	bool pop();
	int size();
	int top();

};

