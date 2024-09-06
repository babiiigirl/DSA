#include <bits/stdc++.h>
using namespace std;

int n, m;
int parent[1000001];

//Tim dinh dai dien cho tap hop chua dinh u
int find(int u)
{
	//T?i uu nén du?ng
	if (u == parent[u]) return u;
	int tmp = find(parent[u]);
	parent[u] = tmp;
	return parent[u];
}

bool Union(int u, int v)
{
	u = find(u); //tim dai dien cua u
	v = find(v);
	if (u == v) return false; //khong gop duoc
	else
	{
		if (u < v) parent[v] = u;
		else parent[u] = v;
		return true;
	}
}

void ktao()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		parent[i] = i;
	}
	bool check = true; 
	for (int i = 0; i < n - 1; i++)
	{
		int x, y; cin >> x >> y;
		if (!Union(x, y))
		{
			check = false;
		}
	}
	if (check)
		cout << "YES\n";
	else 
		cout << "NO\n";
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		ktao();
	}
}
