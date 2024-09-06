#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int v, e;
vector<int> ke[1000];
bool visited[1000];
int cnt;

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
	cnt = 0;
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

int main()
{
	int t; cin >> t;
	while (t--)
	{
		input();
		for (int i = 1; i <= v; i++)
		{
			if (!visited[i])
			{
				DFS(i);
				++cnt;
			}
		}
		cout << cnt << endl;
		for (int i = 0; i < 1000; i++)
			ke[i].clear();
	}
}

