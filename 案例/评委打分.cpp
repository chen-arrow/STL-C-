#include<iostream>
#include<string>
using namespace std;
#include<deque>
#include<vector>
#include<algorithm>
#include<ctime>
class Person
{
public:
	Person(string name, int sorce)
	{
		this->m_name = name;
		this->m_sorce = sorce;
	}
	string m_name;
	int m_sorce;
};
void creatPerson(vector<Person>&v)
{
	string nameSeed="ABCDE";
	
	for (int i = 0; i < 5; i++)
	{
         string name = "选手";
		 name += nameSeed[i];
		 int sorce = 0;

		Person p(name, sorce);
		v.push_back(p);
	}
}
void setScorce(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int>d1;
		for (int i = 0; i < 10; i++)
		{
			int scorce = rand() % 41 + 60;  //60~100
			d1.push_back(scorce);
		}
		//排序
		sort(d1.begin(), d1.end());
		//删除最高分和最低分
		d1.pop_back();
		d1.pop_front();
		//求平均分
		int sum = 0; 
		for (deque<int>::iterator dit = d1.begin(); dit != d1.end(); dit++)
		{
			sum += *dit;
		}
		int avg = sum / d1.size();
		it->m_sorce = avg;
	}
}
void showScorce(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it).m_name << "  分数: " << (*it).m_sorce << endl;
	 }
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	//创建选手
	vector<Person>v1;
	creatPerson(v1);
	/*for (vector<Person>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << "姓名：" << (*it).m_name << "  成绩: " << (*it).m_sorce << endl;
	}*/
	//给选手打分
	setScorce(v1);
	//显示得分
	showScorce(v1);
}