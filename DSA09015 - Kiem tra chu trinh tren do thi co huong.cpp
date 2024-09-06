#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int v, e, check;
vector<int> ke[1001];
int color[1001];

void input()
{
	cin >> v >> e;
	for (int i = 0; i < e; i++)
	{
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
	}
	memset(color, 0, sizeof(color));
	check = 0;
}

void clear()
{
	for (int i = 0; i < 1001; i++)
		ke[i].clear();
}

void DFS(int u)
{
	color[u] = 1;
	for (int v : ke[u])
	{
		if (color[v] == 0)
		{
			DFS(v);
		}
		else if (color[v] == 1)	check = 1;;
	}
	color[u] = 2;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		input();
		for (int i = 1; i <= v; i++)
		{
			if (color[i] == 0)
			{
				DFS(i);
			}
		}
		if (check)
			cout << "YES\n";
		else
			cout << "NO\n";
		clear();
	}
}

