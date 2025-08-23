#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstdio>
#include <string>
#include <iostream>
#include<utility>
using namespace std;


	int main()
	{
		pair<int, double> p[1001];
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
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
		p[i -1] = make_pair(im, ia);

		int sum1 = 0;
		double sum2 = 1;

		for (int i = 0; i < n; i++)
		{
			sum1 += p[i].first;
			sum2 *= p[i].second;

		}
		int answer = sum1 * sum2;
		printf("%d", answer);
	}






