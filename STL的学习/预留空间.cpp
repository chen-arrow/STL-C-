#include<iostream>
#include<vector>
using namespace std;
void test01()
{
	vector<int>v1;

	//预留空间
	v1.reserve(100000);

	int num = 0; //统计开辟内存的次数
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