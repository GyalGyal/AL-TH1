#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//게임의 완성=============================
/*
int main()
{
	






}
*/

int main()
{
	int a[10], b[10];
	int anum = 0, bnum = 0;
	
	int lastwin = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}

	for (int i = 0; i < 10; i++)
	{

	if (a[i] > b[i])
		{
			anum += 3;
			lastwin = 1;
		}

		if (a[i] < b[i])
		{
			bnum += 3;
			lastwin = 2;
		}

		if(a[i] == b[i])
		{
			anum++;
			bnum++;
		}
	}
	

	printf("%d %d\n", anum, bnum);

	if (anum > bnum)
	{
		printf("A");

	}

	if (anum < bnum)
	{
		printf("B");

	}

	if (anum == bnum)
	{
		if (lastwin ==1)
		{
			printf("A");
		}

		else if (lastwin == 2)
		{
			printf("B");
		}

		else
		{
			printf("D");
		}
	}
}