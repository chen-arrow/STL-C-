#include<iostream>
#include<set>
using namespace std;
void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int>s1;

	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(30);
	printSet(s1);

	//判空
	if (s1.empty())
	{
		cout << "为空" << endl;
	}
	else
	{
		cout << "不为空" << endl;
		cout << "s1的大小: " << s1.size() << endl;
	}
}
//交换
void test02()
{
	set<int>s1;

	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(30);

	set<int>s2;

	s2.insert(100);
	s2.insert(400);
	s2.insert(200);
	s2.insert(300);
	s2.insert(300);

	cout << "交换前: " << endl;
	printSet(s1);
	printSet(s2);
	cout << "交换后: " << endl;
	s1.swap(s2);
	printSet(s1);
	printSet(s2);
}
int main()
{
	//test01();
	test02();
}