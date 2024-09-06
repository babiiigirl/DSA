#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int v, e, check;
bool visited[1005];
vector<int> ke[1005];
int parent[1005];

void input()
{
	cin >> v >> e;
	for (int i = 0; i < e; i++)
	{
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
	check = 0;
 } 
 
void DFS(int u)
{
	visited[u] = true;
	for (int v : ke[u])
	{
		if (!visited[v])
		{
			parent[v] = u;
			DFS(v);
		}
		else if(v != parent[u])
			check = 1;
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		input();
		for (int i = 1; i <= v; i++)
		{
			if (!visited[i])
				DFS(i);
		}
		if (check)
			cout << "YES\n";
		else
			cout << "NO\n";
		for (int i = 0; i < 1005; i++)
			ke[i].clear();
	}
}

