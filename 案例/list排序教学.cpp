#include<iostream>
#include<list>
#include<string>
using namespace std;
class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Height = height;
		this->m_age = age;
		this->m_name = name;
	}

	string m_name;
	int m_age;
	int m_Height;
};
bool comperaPerson(Person& p1, Person& p2)
{
	//升序
	if (p1.m_age == p2.m_age)
	{
		//年龄相同 做降序
		return p1.m_Height > p2.m_Height;
	}
	return p1.m_age < p2.m_age;
}
void test01()
{
	list<Person>L;

	//准备数据
	Person p1("刘备", 35, 175);
	Person p2("曹操", 40, 180);
	Person p3("孙权", 45, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);

	//插入数据
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << (*it).m_name << " 年龄：" << (*it).m_age << " 身高: " << (*it).m_Height << endl; 
	}  
	//排序
	cout << "-----------------------------------------------------------------" << endl;
	cout << "排序后：" << endl;
	L.sort(comperaPerson);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << (*it).m_name << " 年龄：" << (*it).m_age << " 身高: " << (*it).m_Height << endl;
	}
}
int main()
{
	test01();
}