#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int map[101][101]={ 0, };
	int m, n;
	int max = 0;
	int sum = 0;
	int x = 0;
	int y = 0;

	scanf("%d %d", &m, &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &map[i][j]);
		}
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < m; j++)
		{
			sum =map[i][j] + map[i + 1][j] + map[i][j + 1] + map[i - 1][j] + map[i][j - 1];
			if (max < sum)
			{
				max = sum;
				x = j+1;
				y = i+1;
			}
		}

	}
	printf("%d %d %d", x, y, max);
	return 0;
}