#include<iostream>
#include<set>
using namespace std;
void test01()	
{
	set<int>s1;

	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(30);

	set<int>::iterator pos = s1.find(40);
	if (pos == s1.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���" << endl;
	}
}
//ͳ��
void test02()
{
	set<int>s1;

	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(30);

	int num = s1.count(30);
	cout << num << endl;
}
int main()
{
	//test01();
	test02();
}