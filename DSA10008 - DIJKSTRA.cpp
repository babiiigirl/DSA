#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
int n, m, s;
vector<ii> adj[1000001];

void nhap()
{
	cin >> n >> m >> s;
	for (int i = 0; i < m; i++)
	{
		int x, y, w; cin >> x >> y >> w;
		adj[x].push_back({y, w});
		adj[y].push_back({x, w});
	}
}

void Dijkstra(int s)
{
	int d[n + 5];
	for (int i = 1; i <= n; i++)
	    d[i] = INT_MAX;
	d[s] = 0;
	priority_queue<ii, vector<ii>, greater<ii>> q;
	q.push({0, s});
	while (!q.empty())
	{
		ii top = q.top(); q.pop();
		int u = top.second, kc = top.first;
		if (kc <= d[u])
		{
			for (auto it : adj[u])
			{
				int v = it.first, w = it.second;
				if (d[v] > d[u] + w)
				{
					d[v] = d[u] + w;
					q.push({d[v], v});
				}
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << d[i] << " ";
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		nhap();
		Dijkstra(s);
		cout << endl;
		for (int i = 0; i < 1000001; i++)
		    adj[i].clear();
	}
}