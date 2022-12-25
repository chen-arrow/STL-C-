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
	Person p1("唐僧",99);
	Person p2("孙悟空", 1000);
	Person p3("猪八戒", 999);
	Person p4("沙僧", 100);

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	while (!q.empty())
	{
		//查看队头
		cout << "队头-----的姓名： " << q.front().m_name << " 年龄：" << q.front().m_age << endl;
		//队尾元素
		cout << "队尾-----的姓名： " << q.back().m_name << " 年龄：" << q.back().m_age << endl;
		//出队
		q.pop();

		
	}
	cout << "队列的大小是： " << q.size() << endl;
}
int main()
{
	test01();
}