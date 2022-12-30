#include<iostream>
using namespace std;
#include<map>
void printMap(map<int, int>m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key= " << (*it).first << " value= " << (*it).second << endl;
	}
	cout << endl;
}
void test01()
{
	map<int, int>m;

	//��һ�ַ���
	m.insert(pair<int, int>(1, 100));

	//�ڶ��ַ���
	m.insert(make_pair(2, 200));

	//�����ַ���
	m.insert(map<int, int>::value_type(3, 300));

	//������
	m[4] = 400;
	printMap(m);

	//ɾ��
	m.erase(m.begin());
	printMap(m);

	m.erase(3);
	printMap(m);

	//���
	//m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);
}
int main()
{
	test01();
	system("pause");
}