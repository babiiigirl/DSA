#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
int parent[100001], sz[100001];

int find(int u)
{
	if (u == parent[u]) return u;
	int tmp = find(parent[u]);
	parent[u] = tmp;
	return tmp;
 } 

void Union(int u, int v)
{
	u = find(u);
	v = find(v);
	if (u != v)
	{
		if (sz[u] < sz[v])
		{
			sz[v] += sz[u];
			parent[u] = v;
		}
		else
		{
			sz[u] += sz[v];
			parent[v] = u;
		}
	}
}

int main()
{
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> m;
		for (int i = 1; i <= n; i++)
		{
			parent[i] = i;
			sz[i] = 1;
		}
		int ma = -1;
		for (int i = 0; i < m; i++)
		{
			int x, y; cin >> x >> y;
			Union(x, y);
		}		
		for (int i = 1; i <= n; i++)
			ma = max(ma, sz[parent[i]]);
		cout << ma << endl;
	}
}
