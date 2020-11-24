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
class Graduate
{
private:
    string name;
    bool gender;
    LL id;
    double score;
    string research;
    string tutor;
    static const string university;
    static double average;
    static int sum;
    static int s;
public:
    Graduate()
    {
        cout << "请输入姓名 学号 性别 成绩 研究领域 指导教师" << endl;
        cin >> name >> id >> gender >> score >> research >> tutor;
        s++;
        sum += score;
        average = double(sum) / double(s);
    }
    Graduate(string nm, bool gd, LL _id, double sc, string res, string tut)
    {
        name = nm;
        gender = gd;
        id = _id;
        score = sc;
        research = res;
        tutor = tut;
        s++;
        sum += score;
        average = double(sum) / double(s);
    }
    Graduate(const Graduate& G)
    {
        name = G.name;
        gender = G.gender;
        id = G.id;
        score = G.score;
        research = G.research;
        tutor = G.tutor;
        s++;
        sum += score;
        average = double(sum) / double(s);
    }
    ~Graduate()
    {
        cout << "析构" << endl;
    }
    void getav()
    {
        cout << "平均成绩为" << average << endl;
    }

    friend char LV(Graduate g);
    void show()
    {
        cout << "姓名:" << name ;
        cout << " 性别:";
        if (gender)
        {
            cout << "男";
        }
        else
        {
            cout << "女";
        }
        cout << " 学号:" << id << " 入学成绩:" << score << " 研究领域:" << research << " 指导教师:" << tutor << " 学校名称:" << university << endl;
    }
    string getnm()
    {
        return name;
    }
};
int Graduate::s = 0;
int Graduate::sum = 0;
double Graduate::average = 0;
const string Graduate::university = "山东师范大学";
char LV(Graduate g)
{
    if (g.score >= 90)
        return 'A';
    if (g.score >= 80)
        return 'B';
    if (g.score >= 70)
        return 'C';
    if (g.score >= 60)
        return 'D';
    return 'E';
}

int main()
{
    Graduate G[3];
    Graduate g("Lu Mingran",true,20191102001,95,"FYSJ","Zhang Qingke");
    for (register int i = 0; i < 3; i++)
    {
        G[i].show();
    }
    g.show();
    g.getav();
    cout << "学生" << g.getnm() << "的等级为" << LV(g) << endl;
    const Graduate _g = g;
    return 0;
}
