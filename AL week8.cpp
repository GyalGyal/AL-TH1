#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <stdio.h>
#include<iostream>

using namespace std;


void max(char a[10000], char b[10000])
{
	int num1 = 0;
	int num2 = 0;
	for (char i = 0; a[i]; i++)
	{
		if (a[i] == '5') {
			a[i] = '6';
		}
		num1 = num1 * 10 + a[i] - '0';
	}
	for (char i = 0; b[i]; i++)
	{
		if (b[i] == '5') {
			b[i] = '6';
		}
		num2 = num2 * 10 + b[i] - '0';
	}

	printf("%d\n", num1 + num2);
	
}

void min(char a[10000], char b[10000])
{
	int num1 = 0;
	int num2 = 0;
	for (char i = 0; a[i]; i++)
	{
		if (a[i] == '5' || a[i] == '6') {
			a[i] = '5';
		}
		num1 = num1 * 10 + a[i] - '0';
	}
	for (char i = 0; b[i]; i++)
	{
		if (b[i] == '5' || b[i] == '6') {
			b[i] = '5';
		}
		num2 = num2 * 10 + b[i] - '0';
	}
	printf("%d\n", num1 + num2);

}



int main()
{
	char a[10000];
	char b[10000];
	scanf("%s %s", a, b);

	max(a, b);
	min(a, b);
}


int main()
{
	char c[1001] = { 0, };
	char r[101] = { 0, };
	int n;
	scanf("%s", c);
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", r);
		if (strcmp(c, r) == 0)
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
}


int main()
{
	string a, b;

	cin >> a;
	cin >> b;
	if (strcmp(a.c_str(), b.c_str()) == 1)
	{
		cout << a;
	}

	if (strcmp(a.c_str(), b.c_str()) == -1)
	{
		cout << b;
	}
}


int main()
{
	string s;
	cin >> s;
	string bomb;
	cin >> bomb;

	while (1)
	{
		int index = s.find(bomb);
		if (index == -1)
			break;
		string left = s.substr(0, s.find(bomb));
		string right = s.substr(s.find(bomb) + bomb.size(), s.size() - (s.find(bomb) + bomb.size()));
		s = left + right;
	}

	
	if (s.size() == 0)
	{
		printf("Art!");
	}
	else
	cout << s;
}
