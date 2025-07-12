#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

/*int factorial(int n)
{
	if (n <= 1) return n;
	return n * factorial(n - 1);
}

int main()
{
	int n;
	scanf("%d", &n);

	printf("%d",factorial(n));
	return 0;
}

//=================================

int teleporter[1001];

int place(int p, int t)
{
	if (t == 0) return p;
	return place(teleporter[p], t-1);
}


int main()
	{
		int n, p, t;
		scanf("%d %d %d", &n, &p, &t);
		for (int i = 1; i <= n; i++)
		{
			scanf("%d", &teleporter[i]);
		}
		printf("%d", place(p, t));
		return 0;
	}

//============================

int first(int n)
{
	return n = (n - 2) * (n + 1) * n / 2;
}

int second(int n)
{
	return (n * n * n) - ((n - 1) * (n - 1) * (n - 1));
}

int third(int n)
{
	return (3 * n * n * n) - (n * n) - (3 * n);
}


int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	if (m == 1) printf("%d", first(n));
	
	if (m == 2) printf("%d", second(n));

	if (m == 3) printf("%d", third(n));

	return 0;
}


//============================================

int sum(int n)
{
	if (n == 0) return 0;
	return n % 10 + sum(n / 10);
}



int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", sum(n));
	return 0;
}

//=============================

int Collatz(int n)
{

	if (n == 1) return 0;
	if (n % 2 == 0) return  Collatz(n /= 2) +1;
	if (n % 2 == 1) return Collatz(n * 3 + 1)+1;
	
}
 
int main()
{
	int n;
	scanf("%d", &n);

	printf("%d", Collatz(n));


}
*/

//========================

int hanoi(int n, int from, int to)
{
	if (n == 0) return 0;
	hanoi(n - 1, from, 6 - from - to);
	printf("%d %d \n", from, to);
	hanoi(n - 1, 6 - from - to, to);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", hanoi(n, 1, 3));
	return 0;
}