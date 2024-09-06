#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

int n, m, u;
vector<int> ke[1005];
bool visited[1005];
vector<pair<int, int>> tree;
int cnt;

void input()
{
	cin >> n >> m >> u;
	for (int i = 0; i < m; i++)
	{
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
	cnt = 0;
}

void dfs(int v)
{
	visited[v] = true;
	for (int x : ke[v])
	{
		if (!visited[x])
		{
			tree.push_back({v, x});
			dfs(x);
		}
	}
}

int main()
{
	//IO();
	int t; cin >> t;
	while (t--)
	{ 
		input();
		dfs(u);
		for (int i = 1; i <= n; i++)
		{
			if (!visited[i])
				++cnt;
		}
		if (cnt > 1)
			cout << -1 << endl;
		else
		{
			for (auto it : tree)
				cout << it.first << " " << it.second << endl;
		}
		for (int i = 0; i < 1005; i++)
			ke[i].clear();
		tree.clear();
	}
}