#include<iostream>
#include<list>
using namespace std;
void test01()
{
	list<int>L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_back(40);

	cout << "��һ��Ԫ��: " << L.front() << endl;
	cout << "���һ��Ԫ��: " << L.back() << endl;

	//��֤���Ƿ���֧���������
	list<int>::iterator it = L.begin();
	it++;
}
int main()
{
	test01();
}