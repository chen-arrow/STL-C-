#include<iostream>
#include<set>
#include<string>
using namespace std;
class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};
class compare
{
public:
	bool operator()(const Person& p1, const Person& p2) const
	{
		return p1.m_age > p2.m_age;
	}
};
void test01()
{
	set<Person, compare>s1;
	Person p1("����", 24);
	Person p2("����", 28);
	Person p3("����", 25);
	Person p4("�ŷ�", 21);


	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);

	for (set<Person, compare>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << "������" << (*it).m_name << " ���䣺" << (*it).m_age << endl;
	}
}
int main()
{
	test01();
}