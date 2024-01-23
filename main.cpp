#include<iostream>
#include<string>
#include<vector>
#include<cstring>

using namespace std;

#include"include/add.h"
#include"include/sub.h"
int main(int argc, char* argv[])
{
	vector<int> a, b;//容纳两个数字
	char *strSum1 = argv[1], *strSum2 = argv[3], *symbol = argv[2];// 接收参数 
	int len1 = -1, len2 = -1;//两个数长度

	//获取数字长度
	while((strSum1[++len1])!='\0'); while((strSum2[++len2])!='\0');

	//字符串转数字
	for(int i = len1-1; i >= 0; i--) a.push_back(strSum1[i]-'0');
	for(int i = len2-1; i >= 0; i--) b.push_back(strSum2[i]-'0');

	//判断+-*/
	if(!strcmp(symbol, "+")) add(a, b);
	else if(!strcmp(symbol, "-"))
	{
		if(!strcmp(strSum1,strSum2))
		{
			cout<<"0"<<endl;
			return 0;
		}
		if(cmp(a,b))sub(a, b);
		else
		{
			cout<<"-";
			sub(b, a);
		}	
	}
	cout<<endl;
	return 0;
}
