#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>
#include <iostream>
#include<utility>
using namespace std;

/*

struct student {
		int id;
		string s;
		int c;
		int a;
	};

int main()
{
	int n;

	scanf("%d", &n);
	
	student p[100];
	
	for (int i = 0; i < n; i++)
	{
		int id;
		char s[100];
		int c;
		int a;
		

		scanf("%d %s %d %d", &p[i].id, s, &p[i].c, &p[i].a);
		p[i].s = s;
	
	}
	int m;

	scanf("%d", &m);

	string name;

	for (int i = 0; i < m; i++)
	{
		cin >> name;

		for (int j = 0; j < n; j++) {
			if (name ==  p[j].s) {
				printf("%d %d %d", p[j].id, p[j].c, p[j].a);
				break;
			}
		}
	}
}



int main()
{
	pair<int, int> p[10001];
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		int t;
		int a;
		scanf("%d %d", &t, &a);
		p[i] = make_pair(t, a);

	}
	int index = 0;
	int answer = 0;
	for (int i = 0; i < n; i++)
	{
		if (p[i].first> index)
		{
			index = p[i].first;
				answer = i;
		}
	}

	printf("%d", answer);
}




int main()
{
	pair<int, int> p[51][51];
	int n;
	int m;
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			int a;
			int b;
			scanf("%d %d", &a, &b);
			p[i][j] = make_pair(a, b);
		}
	}
	int n1, m1;
	int n2, m2;

	scanf("%d %d", &n1, &m1);
	scanf("%d %d", &n2, &m2);

	pair<int, int> temp = p[n1][m1];
	p[n1][m1] = p[n2][m2];
	p[n2][m2] = p[n1][m1];

	//  (성별 키) -> p[0][0] (성별 키) -> p[0][1] (성별 키)
	//  (성별 키) (성별 키) (성별 키)

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			printf("%d %d ", p[i][j].first, p[i][j].second);
		}
		printf("\n");
	}
}

*/


int main()
{
	pair<int, double> p[101];
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int m;
		double a;
		scanf("%d %lf", &m, &a);
		p[i] = make_pair(m, a);
	}
	int i;
	int im;
	double ia;
	scanf("%d %d %lf", &i, &im, &ia);
	p[i] = make_pair(im, ia);

	int sum1 = 0;
	int sum2 = 0;

	for (int i = 1; i <= n; i++)
	{
		sum1 += p[i].first;
		sum2 += p[i].second;

	}
	printf("%d", sum1 * sum2);
}