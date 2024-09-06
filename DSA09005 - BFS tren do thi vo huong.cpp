#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int v, e, n;
vector<int> ke[1000];
bool visited[1000];

void input()
{
	cin >> v >> e >> n;
	for (int i = 0; i < e; i++)
	{
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}

void BFS(int u)
{
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while (!q.empty())
	{
		int x = q.front(); q.pop();
		cout << x << " ";
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
		BFS(n);
		cout << endl;
		for (int i = 0; i < 1000; i++)
			ke[i].clear();
	}
}

