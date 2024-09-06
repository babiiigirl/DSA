#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, s, t;
bool visited[1000];
vector<int> ke[1000];
int pre[1000];

void input()
{
	cin >> n >> m >> s >> t;
	for (int i = 0; i < m; i++)
	{
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
	memset(pre, 0, sizeof(pre));
}

void DFS(int u)
{
	visited[u] = true;
	for (int v : ke[u])
	{
		if (!visited[v])
		{
			pre[v] = u;
			DFS(v);
		}
	}
}

int main()
{
	int test; cin >> test;
	while (test--)
	{
		input();
		DFS(s);
		if (!visited[t])
			cout << "-1";
		else
		{
			vector<int> res;
			while (t != s)
			{
				res.push_back(t);
				t = pre[t];
			}
			res.push_back(s);
			for (int i = res.size() - 1; i >= 0; i--)
				cout << res[i] << " ";
		}
		for (int i = 0; i < 1000; i++)
			ke[i].clear();
		cout << endl;
	}
}

