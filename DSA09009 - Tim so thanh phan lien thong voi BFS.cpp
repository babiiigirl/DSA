#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int v, e, cnt = 0;
vector<int> ke[10005];
bool visited[1005];

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

void BFS(int u)
{
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while (!q.empty())
	{
		int x = q.front(); q.pop();
		for (int y : ke[x])
		{
			if (!visited[y])
			{
				q.push(y);
				visited[y] = true;
			}
		}
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
				BFS(i);
				++cnt;
			}
		}
		cout << cnt << endl;
		for (int i = 0; i < 1005; i++)
			ke[i].clear();
	}
}

