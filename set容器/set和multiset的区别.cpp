#include<iostream>
#include<set>
using namespace std;
void test01()
{
	set<int>s1;
	
	pair<set<int>::iterator,bool> res=s1.insert(10);

	if (res.second)
	{
		cout << "����ɹ�" << endl;
	}
	else
	{
		cout << "����ʧ��" << endl;
	}
	res= s1.insert(10);
	if (res.second)
	{
		cout << "����ɹ�" << endl;
	}
	else
	{
		cout << "����ʧ��" << endl;
	}

	multiset<int>ms;
	ms.insert(10);
	ms.insert(10);
	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << " ";
	}
}
int main()
{
	test01();
}