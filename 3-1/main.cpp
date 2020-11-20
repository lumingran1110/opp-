#include<set>
#include<map>
#include<queue>
#include<stack>
#include<cmath>
#include<cstdio>
#include<vector>
#include<string>
#include<cstring>
#include<utility>
#include<iostream>
#include<algorithm>
#include "WK1.h"
#include "WK2.h"
#include "WK3.h"
#include "WK4.h"
#include "WK5.h"
#include "WK5_.h"
//include<bits/stdc++.h>
using namespace std;
#define LL long long
#define MOD 1000000007
#define MAXN 100050
#define INF 1000050
LL read()
{
    LL w = 1, x = 0;
    char ch = 0;
    while (ch < '0' || ch>'9')
    {
        if (ch == '-')
            w = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        x = x * 10 + (ch - '0');
        ch = getchar();
    }
    return w * x;
}

int main()
{
    cout << "-----------��ҵһ-----------" << endl;
    Stack z;
    cout << "������Ҫ��ջ��Ԫ������" << endl;
    int n = read();
    cout << "������Ҫ��ջ��Ԫ��" << endl;
    while (n--)
    {
        z.push(read());
    }
    cout << "��ǰջ��Ϊ" << z.top() << endl;
    cout << "��ǰջ����" << z.size() << "��Ԫ��" << endl;
    cout << "---------------------------" <<endl<<endl<< endl;
    cout << "-----------��ҵ��-----------" << endl;
    char ch[1000];
    cout << "�������ַ���1" << endl;
    gets_s(ch);
    Mystring s1=ch;
    cout << "�������ַ���2" << endl;
    gets_s(ch);
    Mystring s2 = ch;
    cout << "�ַ���1Ϊ";
    s1.out();
    cout << endl;
    s1.add(s2);
    cout << "���ַ���2�ϲ����ַ���1���ַ���1Ϊ";
    s1.out();
    cout << endl;
    cout << "�ַ���1�ĳ���Ϊ" << s1.length() << endl;
    if (s1.greater(s2))
    {
        cout << "�ַ���1�����ַ���2" << endl;
    }
    else
    {
        cout << "�ַ���2�����ַ���1" << endl;
    }
    cout << "������Ҫɾ���ַ����ĵڼ����ַ�" << endl;
    int nn = read();
    s1.del(nn);
    cout << "�ַ���1Ϊ";
    s1.out();
    cout << endl;
    cout << "��λ�������ַ���1Ϊ";
    s1.swap();
    s1.out();
    cout << endl;
    cout << "---------------------------" << endl << endl << endl;
    cout << "-----------��ҵ��-----------" << endl;
    double a, b, c;
    cout << "���������������߳�" << endl;
    cin >> a >> b >> c;
    Triangle t(a, b, c);
    if (t.check())
    {
        cout << "���Թ���������" << endl;
        cout << "�������ε��ܳ�Ϊ" << t.getlen() << endl;
        cout << "�������ε����Ϊ" << t.getS() << endl;
        t.gettype();
    }
    else
    {
        cout << "���ܹ���������" << endl;
    }
    cout << "---------------------------" << endl << endl << endl;
    cout << "-----------��ҵ��-----------" << endl;
    cout << "������ѧ������Ϣ(���� �Ա� ѧ�� ��ַ ���� �ɼ�)" << endl;
    std::string ss, sss;
    int gen, y, m, d, x1,x2,x3,x4,x5,x6;
    bool ge;
    LL nu;
    cin >> ss >> gen >> nu >> sss >> y >> m >> d;
    ge = gen;
    cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6;
    Student st1(ss, ge, nu, y, m, d, sss, x1, x2, x3, x4, x5, x6);
    Student st2(st1);
    Student st3;
    cout << st1.getname() << ' ';
    if (st1.getGender())
    {
        cout << "�� ";
    }
    else
    {
        cout << "Ů ";
    }
    cout << st1.getnum() << ' ';
    st1.getbirth();
    cout << st1.getadd() << endl;
    st1.getscore();
    cout << "---------------------------" << endl << endl << endl;
    cout << "-----------��ҵ��-----------" << endl;
    cout << "��������������" << endl;
    double px, py;
    cin >> px>> py;
    Point p1(px, py);
    cin >> px>>py;
    Point p2(px, py);
    p1.getCoordinate();
    p2.getCoordinate();
    cout <<"�������Ϊ"<< distance(p1, p2) << endl;
    cout << "---------------------------" << endl << endl << endl;
    return 0;
}
