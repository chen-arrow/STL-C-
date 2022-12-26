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
	//����
	if (p1.m_age == p2.m_age)
	{
		//������ͬ ������
		return p1.m_Height > p2.m_Height;
	}
	return p1.m_age < p2.m_age;
}
void test01()
{
	list<Person>L;

	//׼������
	Person p1("����", 35, 175);
	Person p2("�ܲ�", 40, 180);
	Person p3("��Ȩ", 45, 170);
	Person p4("����", 25, 190);
	Person p5("�ŷ�", 35, 160);
	Person p6("����", 35, 200);

	//��������
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������" << (*it).m_name << " ���䣺" << (*it).m_age << " ���: " << (*it).m_Height << endl; 
	}  
	//����
	cout << "-----------------------------------------------------------------" << endl;
	cout << "�����" << endl;
	L.sort(comperaPerson);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������" << (*it).m_name << " ���䣺" << (*it).m_age << " ���: " << (*it).m_Height << endl;
	}
}
int main()
{
	test01();
}