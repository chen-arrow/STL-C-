#include<iostream>
#include<list>
using namespace std;
void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	list<int>L;
	
	L.push_back(10);
	L.push_back(30);
	L.push_back(20);
	L.push_back(50);
	L.push_back(40);
	cout << "反转前：";
	printList(L);
	cout << endl;
	L.reverse();
	cout << "反转后：";
	printList(L);
}
bool mycompare(int v1, int v2)
{
	//降序
	return v1 > v2;
}
void test02()
{
	list<int>L;

	L.push_back(10);
	L.push_back(30);
	L.push_back(20);
	L.push_back(50);
	L.push_back(40);


	cout << "升序" << endl;
	L.sort();
	printList(L);
	cout << "降序" << endl;
	L.sort(mycompare);
	printList(L);
}
int main()
{
	//test01();
	test02();
}