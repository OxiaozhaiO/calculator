#include<iostream>
#include<vector>
using namespace std;
bool cmp(vector<int> a, vector<int> b)
{
	if(a.size() < b.size()) return false;
	else if(a.size() > b.size()) return true;
	else
	{
		for(int i = a.size()-1; i >= 0 ; i--)
		{
			if(a[i] < b[i]) return false;
		}
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
		if(temp < 0) c.push_back(temp+10);
		else c.push_back(temp);
	}
	while(c.back() == 0) c.pop_back();
	for(int i = c.size()-1; i >= 0; i--) cout<<c[i];
}
