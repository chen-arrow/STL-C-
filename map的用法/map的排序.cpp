#include<iostream>
using namespace std;
#include<map>
#include<string>
void printMap(map<int, int>m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key= " << (*it).first << " value= " << (*it).second << endl;
	}
	cout << endl;
}
class mycompera
{
public:
	bool operator()(int v1,int v2) const
	{
		return v1 > v2;
	}
};
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
class Mycompera
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};
void test01()
{
	map<int, int, class mycompera>m1;
	m1.insert(make_pair(1, 10));
	m1.insert(make_pair(2, 20));
	m1.insert(make_pair(3, 30));
	m1.insert(make_pair(4, 40));
	m1.insert(make_pair(5, 50));
	
	map<int,Person, Mycompera>m2;
	Person p1("Áõ±¸", 24);
	Person p2("ÕÅ·É", 28);
	Person p3("¹ØÓğ", 11);
	Person p4("ÕÔÔÆ", 23);
	m2.insert(make_pair(6, p1));
	m2.insert(make_pair(7, p2));
	m2.insert(make_pair(8, p3));
	m2.insert(make_pair(9, p4));
	for (map<int, Person, Mycompera>::iterator it = m2.begin(); it != m2.end(); it++)
	{
		cout << "key= " << (*it).first << "value= " <<(*it).second.m_name << endl;
	}
	cout << endl;
}
int main()
{
	test01();
}