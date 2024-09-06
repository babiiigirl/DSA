#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, cnt; 
bool visited[1000];
vector<int> ke[1000];
int ID[1000];

void input()
{
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int u, v; cin >> u >> v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	memset(visited, false, sizeof(visited));
	cnt = 0;
}

void DFS(int u)
{
	ID[u] = cnt;
	visited[u] = true;
	for (int v : ke[u])
	{
		if (!visited[v])
			DFS(v);
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		input();
		for (int i = 1; i <= n; i++)
		{
			if (!visited[i])
			{
				++cnt;
				DFS(i);
			}
		}
		int q; cin >> q;
		while (q--)
		{
			int x, y; cin >> x >> y;
			if (ID[x] == ID[y])
				cout << "YES\n";
			else
				cout << "NO\n";
		}
		for (int i = 0; i < 1000; i++)
			ke[i].clear();
		memset(ID, 0, sizeof(ID));
	}
}

