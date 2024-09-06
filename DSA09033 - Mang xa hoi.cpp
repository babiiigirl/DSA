#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, ver;
vector<int> adj[100000];
bool visited[100000];

void input()
{
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
	ver = 0;
}

void DFS(int u)
{
	visited[u] = true;
	for (int v : adj[u])
	{
		if (!visited[v])
		{
			++ver;
			DFS(v);
		}
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		input();
		ll res = 0;
		for (int i = 1; i <= n; i++)
		{
			ver = 1;
			if (!visited[i])
			{
				DFS(i);
				res += ver * (ver - 1) /2;
			}
		}
		cout << res << endl;
		if (res == m) cout << "YES\n";
		else cout << "NO\n";
		for (int i = 0; i < 100000; i++)
			adj[i].clear();
	}
}

