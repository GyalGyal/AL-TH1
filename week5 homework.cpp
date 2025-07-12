#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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

		if (m[n - (i+1)] <= m[n - (i+2)])
		{
			count++;
		}
	}
	printf("%d", count);
}