#include<iostream>
#include<set>
#include<string>
using namespace std;
void test01()
{
	//��һ��
	pair<string, int>p("tom", 10);
	cout << "����: " << p.first << " ���䣺" << p.second << endl;
	//�ڶ���
	pair<string, int>p1 = make_pair("Jerry", 18);
	cout << "����: " << p1.first << " ���䣺" << p1.second << endl;
}
int main()
{
	test01();
}