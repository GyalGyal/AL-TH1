#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string>
#include<iostream>
#include <string.h>
using namespace std;


int main()
{
	string a;
	string b;
	int count = 0;

	cin >> a >> b;

	for (int i = 0; i < a.size(); i++)
	{
		if (a.substr(i, b.size()) == b)
		{
			count ++;
			i += b.size();
		}
	}
	printf("%d", count);
	return 0;
}