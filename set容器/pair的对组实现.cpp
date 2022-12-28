#include<iostream>
#include<set>
#include<string>
using namespace std;
void test01()
{
	//第一种
	pair<string, int>p("tom", 10);
	cout << "姓名: " << p.first << " 年龄：" << p.second << endl;
	//第二种
	pair<string, int>p1 = make_pair("Jerry", 18);
	cout << "姓名: " << p1.first << " 年龄：" << p1.second << endl;
}
int main()
{
	test01();
}