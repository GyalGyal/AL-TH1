#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int s1, s2, s3;
	int aver;
	
	scanf("%d", &n);
	scanf("%d %d %d", &s1, &s2, &s3);

	aver = (s1 + s2 + s3) / n;


	if (aver >= 80)
	{
	printf("easy");
	}

	if (aver >= 60)
	{
		printf("normal");
	}
	else
	{
		printf("hard");
	}
}


//===================================

int main()
{
	int n, b, i;
	int a[10];
	int count = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{

		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{

		scanf("%d", &b);
		if (a[i] == b)
		{
			count++;
}
	}

	printf("%d", count);
}

int main()
{
	long long n;
	int count = 0;

	scanf("%lld", &n);

	while (n>=10) {
		int temp = 0;
		while (n)
		{
			temp += n % 10;
			n /= 10;
		}
		n = temp;
		count++;
	}
	printf("%d", count);

	}


int main()
{
	int a[10], b[10];
	int as = 0, bs = 0;
	for (int i = 0; i < 10; i++)
	{

		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++)
	{

		scanf("%d", &b[i]);
		if (a[i] > b[i])
		{
			as++;
		}
		if (a[i] < b[i])
		{
			bs++;
		}
	}

	if (as > bs)
	{
		printf("A");
	}
	else if (as < bs)
	{
		printf("B");
	}
	else
	{
		printf("D");
	}
}

//==============================

int main()
{
	int n, k;
	int count = 0;
	int a = 0;
	int i = 0;
	int j = 0;

	scanf(" %d %d", &n, &k);

	for (j = 1; j <= n; j++)
	{
		if ((n % j) == 0)
		{
			count++;
			if (count == k)
			{
				a = j;
			}
		}
	}
	
	printf("%d", a);
}


//================================

int main()
{

	int n, m, j,num = 0, count = 0;
	int i = 0;
	scanf("%d %d", &n, &m);


	for (i = n; i < m; i++) {
		num = 0;
		for (j = 2; j * j < i; j++)
		{
			if (i % j == 0)
			{
				num++;
			}
		}
		if (num == 1)
		{
			count++;
		}
			
		
	}
printf("%d", count);
}