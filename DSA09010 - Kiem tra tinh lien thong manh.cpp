#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int v, e; 
bool visited[1000];
vector<int> ke[1000];

void input()
{
	cin >> v >> e;
	for (int i = 0; i < e; i++)
	{
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
	}
	memset(visited, false, sizeof(visited));
}

void DFS(int u)
{
	visited[u] = true;
	for (int v : ke[u])
	{
		if (!visited[v])
			DFS(v);
	}
} 

bool check()
{
	for (int i = 1; i <= v; i++)
	{
		if(!visited[i])
			return false;
	}
	return true;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		input();
		DFS(1);
		if (check())
			cout << "YES\n";
		else
			cout << "NO\n";
		for (int i = 0; i < 1000; i++)
			ke[i].clear();
	}
}

