#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <utility>
#include <stack>
#include <queue>
#include <cstring>
#include <string.h>
#include <iostream>
using namespace std;

/*
int main()
{
	int n;
	scanf("%d", &n);

	stack <int> m;
	queue <string> a;

	for (int i = 0; i < n; i++)
	{
		int b;
		string c;

		scanf("%d", &b);
		cin >> c;

		m.push(b);
		a.push(c);
	}
	while (!m.empty())
	{
		printf("%d ", m.top());
		m.pop();
	}
	printf("\n");
	while (!a.empty())
	{
		cout << a.front();
		printf(" ");
		a.pop();
	}
	return 0;
}



int main()
{
	int n, k;

	scanf("%d %d", &n, &k);
	queue<int> q;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}
	while (!q.empty())
	{
		for (int i = 1; i < k; i++)
		{
			q.push(q.front());
			q.pop();
		}
		printf("%d ", q.front());
		q.pop();
	}
	return 0;
}


int main()
{
	int n;
	scanf("%d", &n);
	stack<int> s;


	for (int i = 0; i < n; i++)
	{
		int m;
		scanf("%d", &m);
		
		while (!s.empty() && s.top() < m)
		{
			s.pop();
		}
		s.push(m);
	}
	printf("%d", s.size());
}

*/

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
		queue<int> q;



}

