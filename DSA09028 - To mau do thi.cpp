#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, d;
vector<int> adj[1001];
int color[1001];

void inp()
{
	cin >> n >> m >> d;
	for (int i = 0; i < m; i++)
	{
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(color, 0, sizeof(color));
}

//kiem tra xem dinh u co to duoc mau c khong?
bool check(int u, int c)
{
	for (int v : adj[u])
	{
		if (color[v] == c) return false;
	}
	return true;
 } 
 
//Dem so luong dinh toi da ma mau c co the to duoc
int solve(int c)
{
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		if (!color[i] && check(i, c))
		{
			color[i] = c;
			++ans;
		}
	}
	return ans;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		inp();
		int cnt = 0, mau = 1;
		bool check = true;
		while (cnt < n && mau <= d)
		{
			int to_mau = solve(mau++);
			if (to_mau == 0) check = false;
			cnt += to_mau;
		}
		if (cnt < n) check = false;
		if (!check) cout << "NO\n";
		else cout << "YES\n";
		for (int i = 1; i <= n; i++)
			adj[i].clear();
	}
}

