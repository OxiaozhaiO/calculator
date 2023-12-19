#include<iostream>
#include<vector>
using namespace std;
bool cmp(vector<int> a, vector<int> b)
{
	//若长度不等直接退出
	if(a.size() < b.size()) return false;
	else if(a.size() > b.size()) return true;
	//长度相等
	else
	{
		for(int i = a.size()-1; i >= 0 ; i--)
			if(a[i] < b[i]) return false;
	}
	return true;
}
void sub(vector<int> a, vector<int> b)
{
	vector<int> c;
	int temp = 0;
	for(int i = 0; i < a.size(); i++)
	{
		temp += a[i];
		if(i < b.size()) temp -= b[i];

		if(temp < 0) c.push_back(temp+10), temp = -1;
		else c.push_back(temp), temp = 0;
	}
	//将后面多于的0去除掉
	while(c.back() == 0) c.pop_back();
	//input
	for(int i = c.size()-1; i >= 0; i--) cout<<c[i];
}
