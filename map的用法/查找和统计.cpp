#include<iostream>
using namespace std;
#include<map>
void test01()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 40));

	multimap<int, int>m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(4, 40));
	//����
	map<int, int>::iterator pos = m.find(5);
	if (pos != m.end())
	{
		cout << "�ҵ���" << endl;
	}
	else
	{
		cout << "û���ҵ�" << endl;
	}
	//ͳ��  
	//map���ܲ����ظ���keyֵԪ�� countͳ�ƶ��� ���Ҫô�� 1 Ҫô�� 0
	// multimap��count����ͳ�ƴ���1����
	int num = m.count(3);
	cout << "��" << num<< endl;
	int count = m1.count(3);
	cout << "��" << count << endl;
}
int main()
{
	test01();
	system("pause");
}