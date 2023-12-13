#include<iostream>
#include<string>
#include<vector>
#include<cstring>

using namespace std;

#include"add.h"
#include"sub.h"
int main(int argc, char* argv[])
{
	char *p = argv[1], *symbol = argv[2];
	vector<int> a, b;
	for(int i = 0; *(p+i) != '\0'; i++) a.push_back(*(p+i) - '0');
	p = argv[3];
	for(int i = 0; *(p+i) != '\0'; i++) b.push_back(*(p+i) - '0');
	if(!strcmp(symbol, "+")) add(a, b);
	else if(!strcmp(symbol, "-")) sub(a, b);
	return 0;
}
