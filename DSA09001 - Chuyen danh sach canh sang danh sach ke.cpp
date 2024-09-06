#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int v, e;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		vector<int> adj[1001];
		cin >> v >> e;
		for (int i = 0; i < e; i++)
		{
			int u, v; cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		for (int i = 1; i <= v; i++)
		{
			cout << i << ": ";
			for (auto x : adj[i])
				cout << x << " ";
			cout << endl; 
		}
	}
}

