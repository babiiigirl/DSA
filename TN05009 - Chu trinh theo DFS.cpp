#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

int n, m, check;
bool visited[1005];
vector<int> ke[1005];
int parent[1005];
vector<int> cycle;

void input()
{
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	check = 0;
	memset(visited, false, sizeof(visited));
	memset(parent, -1, sizeof(parent));
}

void dfs(int u)
{
	visited[u] = true;
	for (int v : ke[u])
	{
		if (!visited[v])
		{
			parent[v] = u;
			dfs(v);
		}
		else if (v != parent[u])
		{
			check = 1;
			int cur = u;
			cycle.push_back(v);
			while (cur != v)
			{
				cycle.push_back(cur);
				cur = parent[cur];
			}
			cycle.push_back(v);
			return;
		}
	}
}

int main()
{
	IO();
	int t; cin >> t;
	while (t--)
	{
		input();
		dfs(1);
		if (!check)
			cout << "NO\n";
		else
		{
			reverse(cycle.begin(), cycle.end());
			for (int x : cycle)
				cout << x << " ";
			cout << endl;
		}
		for (int i = 0; i < 1005; i++)
			ke[i].clear();
		cycle.clear();
	}
}