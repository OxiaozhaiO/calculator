#define IOSTREAM
#include<iostream>

#define VECTOR
#include<vector>

using namespace std;
void add(vector<int> a, vector<int> b)
{
	vector<int> c;
	int temp = 0;
	for(int i = 0; i < a.size() || i < b.size() || temp; i++)
	{
		if(i < a.size()) temp += a[i];
		if(i < b.size()) temp += b[i];
		c.push_back(temp%10);
		temp /= 10;
	}
	for(int i = c.size() - 1; i >= 0; i--) cout<<c[i];
}
