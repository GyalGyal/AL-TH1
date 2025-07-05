#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
	vector<int>v[10000];
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++)
	{
		int from, to;
		scanf("%d %d", &from, &to);;
		v[from].push_back(to);
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			printf("%d ", v[i][j]);
			
		}
		printf("\n");
		if (v[i].size() == 0)
		{
			printf("0");
		}
	}	
	return 0;
}

//=============================================================

int main()
{
	int map[101][101] = { 0, };
	int n;
	int paper_x = 0, paper_y = 0;

	scanf("%d", &n);

	for (int p = 0; p < n; p++)
	{
		scanf("%d %d", &paper_x, &paper_y);
		for (int i = paper_x; i < paper_x + 10; i++)
		{
			for (int j = paper_y; j < paper_y + 10; j++)
			{
				map[i][j] = 1;
			}
		}
	}
	int count = 0;

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (map[i][j] == 1)
			{
				count++;
			}
		}
	}
	printf("%d", count);

}


//==================================

int main()
{
	vector<int>ground[10000];
	int n, t, k;
	scanf("%d", &n);
	scanf("%d %d", &t, &k);
	for (int i = 0; i < t; i++)
	{
		int tx, ty;
		scanf("%d %d", &tx, &ty);
		ground[tx].push_back(ty);
	}
	int count = 0;
	for (int i = 1; i <= k; i++)
	{
		int kx, ky;
		scanf("%d %d", &kx, &ky);
		for (int j = 0; j < ground[kx].size(); j++)
		{
			if (ground[kx][j] == ky && !count)
			{
				count += 1;
			}
		}
	}
	if (count)
	{
		printf("%d", count);
	}
	else
	{
		printf("-1");
	}
	return 0;
}


//=========================================

int main()
{
	int m[1000];
	int n;
	int h;
	int count = 0;
	int sum = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &h);
		m[i] = h;

		if (m[n - 1] > m[n - 2])
		{
			count++;
		}
	}




}