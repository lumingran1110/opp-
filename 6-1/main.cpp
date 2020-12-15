#include<iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
using namespace std;
class Array
{
private:
	int size;
	int* ps;
public:
	Array()
	{
		size = 0;
		ps = NULL;
	}
	Array(int s, int a[]) {
		size = s;
		ps = new int[size + 1]; 
		for (int i = 0; i <= s; i++) {
			ps[i] = a[i];
		}
	}
	Array(const Array& arr) {
		size = arr.size;
		ps = new int[size + 1];
		for (int i = 0; i <= size; i++) {
			ps[i] = arr.ps[i];
		}
	}
	~Array()
	{
		delete[]ps;
	}
	int length() {
		return size;

	}
	void print() const {
		for (int i = 0; i < size; i++) {
			cout << ps[i] << " \n"[i == size - 1];
		}
	}
	int& operator[](const int pos) {
		return ps[pos];

	}
	Array& operator = (const Array& arr) {
		if (&arr == this) {
			return *this;

		}
		if (ps != NULL) {
			delete[]ps;

		}
		size = arr.size;
		if (size > 0) {
			this->ps = new int[size + 1];

		}
		for (int i = 0; i < size; i++) {
			this->ps[i] = arr.ps[i];

		}
		return (*this);

	}
	Array operator + (const Array& arr) {
		Array tmp;
		tmp.size = size + arr.size;
		if (tmp.size > 0) {
			tmp.ps = new int[tmp.size + 1];

		}
		int tp = 0;
		for (int i = 0; i < size; i++) {
			tmp.ps[tp++] = ps[i];

		}
		for (int i = 0; i < arr.size; i++) {
			tmp.ps[tp++] = arr.ps[i];

		}
		return tmp;

	}
	friend Array operator - (Array&, Array&);
};
Array operator - (Array& ar1, Array& ar2) {
	Array tmp;
	tmp.ps = new int[ar1.size + 1];
	int tp = 0;
	set<int>se;
	queue<int>que;
	for (int i = 0; i < ar1.size; i++) {
		que.push(ar1.ps[i]);

	}
	for (int i = 0; i < ar2.size; i++) {
		se.insert(ar2.ps[i]);

	}
	while (!que.empty()) {
		int nw = que.front();
		que.pop();
		if (!se.count(nw)) {
			tmp.ps[tp++] = nw;

		}

	}
	tmp.size = tp;
	while (tp < ar1.size) {
		tmp.ps[tp++] = 0;

	}
	return tmp;

}

class Shapes {
public:
	virtual void dispaly() = 0;

};

class Rectangle : public Shapes
{
public:
	void dispaly() {
		cout << "矩形" << endl;

	}
};

class Cricle : public Shapes
{
public:
	void dispaly() {
		cout << "圆形" << endl;
	}
};

void task2()
{
	int a[] = { 1,2,3,4,5 };
	int b[] = { 3,4,5,6,7 };
	int c[] = { 8,9,10,11,12 };
	Array ar1(5, a), ar2(5, b), ar3(5, a);
	cout << endl << "重载 [] ： " << endl;
	for (int i = 0; i < ar3.length(); i++) {
		cout << ar3[i] << " \n"[i == ar3.length() - 1];

	}
	cout << endl << "重载 + ： " << endl;
	ar3 = ar1 + ar2;
	ar3.print();
	cout << endl << "重载 - ： " << endl;
	ar3 = ar1 - ar2;
	ar3.print();
	return;
}
void task3()
{
	Shapes* p[2 + 1];
	Rectangle rec;
	Cricle cri;
	p[1] = &rec;
	p[2] = &cri;
	p[1]->dispaly();
	p[2]->dispaly();
	cout << endl;
	return;
}
int main()
{
	cout << "任务二：" << endl;
	task2();
	cout << endl << "任务三：" << endl;
	task3();
	system("pause");

	return 0;
}

