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
	//只要不为空就输出栈顶元素，并且执行出栈操作
	while (!s.empty())
	{
		cout << "栈顶的数: " << s.top() << endl;

		//出栈
		s.pop();
	}
	cout << "栈的大小" << s.size() << endl;
}
int main()
{
	test01();
}