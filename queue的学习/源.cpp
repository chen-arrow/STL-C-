#include<iostream>
#include<queue>
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
void test01()
{
	queue<Person>q;
	Person p1("��ɮ",99);
	Person p2("�����", 1000);
	Person p3("��˽�", 999);
	Person p4("ɳɮ", 100);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	while (!q.empty())
	{
		//�鿴��ͷ
		cout << "��ͷ-----�������� " << q.front().m_name << " ���䣺" << q.front().m_age << endl;
		//��βԪ��
		cout << "��β-----�������� " << q.back().m_name << " ���䣺" << q.back().m_age << endl;
		//����
		q.pop();

		
	}
	cout << "���еĴ�С�ǣ� " << q.size() << endl;
}
int main()
{
	test01();
}