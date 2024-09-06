#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int v, e, a[1001][1001];

void input()
{
	memset(a, 0, sizeof(a));
	cin >> v >> e;
	for (int i = 0; i < e; i++)
	{
		int x, y; cin >> x >> y;
		a[x][y] = 1;
	}
}

int euler()
{
	for (int i = 1; i <= v; i++)
	{
		int x = 0, y = 0;
		for (int j = 1; j <= v; j++)
		{
			if (a[i][j]) ++x;
			if (a[j][i]) ++y;
		}
		if (x != y)
			return 0;
	 } 
	return 1;
 } 

int main()
{
	int t; cin >> t;
	while (t--)
	{
		input();
		cout << euler() << endl;
	}
}

