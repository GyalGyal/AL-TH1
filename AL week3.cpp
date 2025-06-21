#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
using namespace std;

/*
int main()
{
	int n, a[100000];
	int max_score = 0, min_score = 100, sum = 0;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (max_score < a[i])
		{
			max_score = a[i];
	}
		if (min_score > a[i])
		{
			min_score = a[i];
		}
		sum = sum + a[i];
	}
	
	printf("%d", (sum - max_score - min_score) / (n-2));
}

//=======================================================

int main()
{
	int c, hight[100000], sum=0, max_hight=0;

	scanf("%d", &c);

	for (int i = 0; i < c; i++)
	{
		scanf("%d", &hight[i]);
	}


	for (int i = 1; i < c; i++)
	{
		if (max_hight < (hight[i]- hight[i - 1]))
		{
			max_hight = (hight[i] - hight[i - 1]);
			sum = i;		
		}
	}

	if (sum > 0)
	{
		printf("%d %d", sum, sum+1);
	}
	else
	{
		printf("0");
	}
}


//================================================

int main()
{
	int n, score[10000], rank[10000];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);
	}
	for (int i = 0; i < n; i++)
	{
		rank[i] = 1;
		for (int j = 0; j < n; j++)
		{
			if (score[i] < score[j])
			{
				rank[i]++;
			}
		}
	}for (int i = 0; i < n; i++)
	{
		printf("%d\n", rank[i]);
	}
}*/

//============================================

int main()
{
	int max = 0;
	int num;
	int count[10] = { 0,0,0,0,0,0,0,0,0,0 };
	
	scanf("%d", &num);

	while (num)
	{
		count[num % 10] += 1;
		num /= 10;

	}
	
	for (int i = 0; i < 10; i++)
	{
		if (count[i] < count[i + 1])
		{
		max = count[i + 1];
		}
	
	}

}



