#include<iostream>
#include<vector>
using namespace std;
void test01()
{
	vector<int>v1;

	//Ԥ���ռ�
	v1.reserve(100000);

	int num = 0; //ͳ�ƿ����ڴ�Ĵ���
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];
			num++;
		}
	}
	cout << num << endl;
}
int main()
{
	test01();
	system("pause");
}