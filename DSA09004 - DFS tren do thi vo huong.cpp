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
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}

void DFS(int x)
{
	cout << x << " ";
	visited[x] = true;
	for (int a : adj[x])
	{
		if (!visited[a]) DFS(a);
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
		for (int i = 0; i < 10000; ++i) 
		{
        	adj[i].clear();
   		}
	}
}

