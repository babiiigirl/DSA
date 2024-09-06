#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, a[1005][1005], c[1005][1005];

void ktao()
{
	for (int i = 1; i<= n; i++)
		for (int j = 1; j <= m; j++)
			c[i][j] = -1;
}

void BFS()
{
	ktao();
	c[1][1] = 0;
	queue<pair<int, int>> q;
	q.push({1, 1});
	while (!q.empty())
	{
		pair<int, int> top = q.front(); q.pop();
		int i = top.first, j = top.second;
		if (i >= 1 && i <= n && j + a[i][j] >= 1 && j + a[i][j] <= m && c[i][j + a[i][j]] == -1)
		{
			q.push({i, j + a[i][j]});
			c[i][j + a[i][j]] = c[i][j] + 1;
		}
		if (j >= 1 && j <= m && i + a[i][j] >= 1 && i + a[i][j] <= n && c[i + a[i][j]][j] == -1)
		{
			q.push({i + a[i][j], j});
			c[i + a[i][j]][j] = c[i][j] + 1;
		}
		if (c[n][m] != -1) break;
	}
	cout << c[n][m] << endl;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> m;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				cin >> a[i][j];
		BFS();
	 } 
}

