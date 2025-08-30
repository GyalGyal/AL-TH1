#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <utility>
#include <stack>
#include <queue>
#include <cstring>
#include <string.h>
#include <iostream>
#include<algorithm>
using namespace std;



int main()
{
	int n;
	

	double d[100001] = {0, };
	double dd[100001] = {0, };

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%f", &d[i]);
		dd[i] = d[i];
	}
	sort(d, d + n);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (d[i] != dd[i])
		{
			count++;
		}
	}

	printf("%d", count);
	return 0;
}

=================================================


int main()
{
	pair <int, int> p[100001];
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &p[i].first, &p[i].second);
	}
	sort(p, p + n);
	for (int i = 0; i < n; i++)
	{
		printf(" %d", p[i].second);
		if (p[i].first != p[i + 1].first)
		{
			printf("\n");
		}
	}
	
	return 0;

}

=============================================



	struct name
	{

		int level;
		int ex;
		int power;
	};

	bool cmp(name left, name right) {

		if (left.level > right.level)
		{
			return true;
		}
		else if (left.level == right.level)
		{
			if (left.ex > right.ex)
			{
				return true;
			}
		else if (left.ex == right.ex)
		{
			if (left.power > right.power)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		}
		else
		{
			return false;
		}
	}
int main()
{
	int n;
	scanf("%d", &n);

	int level;
	int ex;
	int power;
	name st[1001];

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &level, &ex, &power);
		  st[i] = {level, ex, power};

	}

	sort(st, st+n, cmp );

	for (int i = 0; i < n; i++)
	{
		printf("\n");
		printf("%d %d %d", st[i].level, st[i].ex , st[i].power);
	}
}




======================================



bool cmp(int left, int right)
{
	int power[100001];


	if (left > right)
	{
		return true;
	}
	else
	{
		return false;
	}
}




int main()
{
	int n;

	scanf("%d", &n);

	pair <int, int> player[100001];
	int power[100001];

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &player[i].first, &player[i].second);

		power[i] = 1/2 * player[i].first * player[i].second * player[i].second;

	}

	sort(player, player + n, cmp);
	

}
