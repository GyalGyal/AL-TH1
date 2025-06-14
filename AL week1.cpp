#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char C;
	int I;
	long long L;
	float D;
	char S[101];

	scanf("%c %d %lld %f %s", &C, &I, &L, &D, &S);
	printf("%s %f %lld %d %c", S, D, L, I, C);

}

//==========================================================

int main()
{
	int n = 0;
	int num;

	scanf("%d", &num);

	if (1000 <= num <= 9999)
	{
		n = num / 1000 + (num / 100) % 10 + (num % 100) / 10 + num % 10;
	}

	printf("%d", n);
}

//==========================================================

int main()
{
	int H = 0;
	int M = 0;
	int S = 0;
	int MIS = 0;
	int stime = 0;

	scanf("%d %d %d %d", &H, &M, &S, &MIS);

	if (0 <= H <= 23 && 0 <= M <= 59 && 0 <= S <= 59)
	{
		int stime = (H * 3600 + M * 60 + S) - MIS;
		int H = stime / 3600;
		int M = (stime % 3600) / 60;
		int S = (stime % 3600) % 60;
	}

	printf("%d %d %d", H, M, S);
};






