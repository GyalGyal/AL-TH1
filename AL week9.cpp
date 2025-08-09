#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>	
using namespace std;



int main()
{
	string m;
	string p;

	cin >> m;
	cin >> p;

	if (m > p)
	{
		printf("sir");
	}
	else
	{
		printf("kid");
	}

}


int main()
{
	string a, b, c, d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cout << stoi(a + b) + stoi(c + d);
}


int main()
{
	int s, l;
	string a[1000];
	string b[1000];
	int count = 0;

	scanf("%d %d", &s, &l);

	for (int i = 0; i < s; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < l; i++)
	{
		cin >> b[i];
	}

	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < l; j++)
		{
			if (a[i] == b[j])
			{
				count++;
				cout << a[i];
				printf("\n");
			}
		}
	}
	printf("%d", count);
}
