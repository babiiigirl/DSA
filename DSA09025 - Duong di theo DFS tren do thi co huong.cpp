#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int v, e, s, t;
bool visited[1000];
vector<int> ke[1000];
int previous[1000];

void input()
{
	cin >> v >> e >> s >> t;
	for (int i = 0; i < e; i++)
	{
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
	}
	memset(visited, false, sizeof(visited));
	memset(previous, 0, sizeof(previous));
}

void DFS(int u)
{
	visited[u] = true;
	for (int v : ke[u])
	{
		if (!visited[v])
		{
			DFS(v);
			previous[v] = u;
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
				t = previous[t];
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

