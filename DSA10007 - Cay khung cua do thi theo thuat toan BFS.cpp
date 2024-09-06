#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, s;
vector<int> adj[1005];
bool visited[1005];
vector<pair<int, int>> tree;

void nhap()
{
	cin >> n >> m >> s;
	for (int i = 0; i < m; i++)
	{
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}

void bfs(int u)
{
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while (!q.empty())
	{
		int x = q.front(); q.pop();
		for (int v : adj[x])
		{
			if (!visited[v])
			{
				tree.push_back({x, v});
				q.push(v);
				visited[v] = true;
			}
		}
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		nhap();
		bfs(s);
		if (tree.size() != n - 1) cout << -1 << endl;
		else 
		{
			for (auto x : tree)
				cout << x.first << " " << x.second << endl;
		}
		for (int i = 0; i < 1005; i++)
			adj[i].clear();
		tree.clear();
	}
}

