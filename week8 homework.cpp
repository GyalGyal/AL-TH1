#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
	string s;
	string n;
	cin >> s;
	cin >> n;
	
	s.c_str();
	
	for (int i = 0; i <= s.size(); i++) {

		string combine = s + n;

		cout << combine.substr(i);
		printf("\n");
	}



}