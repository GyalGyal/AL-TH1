#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//=====================================================================
//10부제

int main()
{

	int count = 0;
	int daynum;
	int car[5];
	int i;


	scanf("%d", &daynum);

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &car[i]);
	}

	for (i = 0; i < 5; i++)
	{
		if (car[i] == daynum)
		{
			count++;
		}
	}

	printf("%d", count);

}

//==================================================================
//지능형기차

int main()
{
	int in[4], out[4], sum = 0, peoplenum=0;

	for (int i = 0; i < 4; i++)
	{

		scanf("%d %d", &out[i], &in[i]);

		sum = sum -out[i] + in[i];
		if (sum > peoplenum)
		{
			peoplenum = sum;
		}
	}
	printf("%d", peoplenum);
}
//====================================================
