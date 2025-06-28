#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
int main()
{
	int n;
	int s[20000];
	int sum = 0;
	int a = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &s[i]);
	}
	for (int i = n - 2; i >= 0; i--)
	{
		if (s[i] >= s[i + 1])
		{
			int a = s[i] - s[i + 1] + 1;
			sum += a;
			s[i] -= a;
		}

	}
printf("\n%d", sum);
}


int main()
{
	int map[100][100];
	int n, m;

	scanf("%d %d", &n, &m);

	int x = 0;
	int y = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &map[i][j]);
			if (map[i][j] == 2)
			{
				x = i;
				y = j;
			}
		}
	}
	while (!(map[x + 1][y] && map[x][y + 1]))
	{
		if (!map[x + 1][y])
		{
			x++;
		}
		else if (!map[x][y + 1])
		{
			y++;
		}
	}
	printf("%d %d", y, x);
}




int main()
{
	int n;
	int m;
	int from = 0, to = 0, cars = 0;
	int car[101][101] = {0, };

	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++)
	{
		scanf("%d %d %d", &from, &to, &cars);

		if (car[from][to] == 0 || car[from][to] < cars) {
			car[from][to] = cars;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
		{
			printf("%d ", car[i][j]);

		}
		printf("\n");
	}

}
*/

int main()
{
	int n;
	int m;
	int from = 0, to = 0, cars = 0;
	int car[101][101] = { 0, };

	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++)
	{
		scanf("%d %d %d", &from, &to, &cars);

		if (car[from][to] == 0 || car[from][to] < cars) {
			car[from][to] = cars;
		}
	}

}