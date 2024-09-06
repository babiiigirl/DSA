#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int v, e, u;
bool visited[10000];
vector<int> adj[10000];

void input()
{
	cin >> v >> e >> u;
	for (int i = 0; i < e; i++)
	{
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
	}
	memset(visited, false, sizeof(visited));
 } 

void DFS(int u)
{
	cout << u << " ";
	visited[u] = true;
	for (int v : adj[u])
	{
		if(!visited[v]) DFS(v);
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		input();
		DFS(u);
		cout << endl;
		for (int i = 0; i < 10000; i++)
			adj[i].clear();
	}
}

