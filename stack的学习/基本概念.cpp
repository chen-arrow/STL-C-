#include<iostream>
using namespace std;
#include<stack>
void test01()
{
	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	//ֻҪ��Ϊ�վ����ջ��Ԫ�أ�����ִ�г�ջ����
	while (!s.empty())
	{
		cout << "ջ������: " << s.top() << endl;

		//��ջ
		s.pop();
	}
	cout << "ջ�Ĵ�С" << s.size() << endl;
}
int main()
{
	test01();
}