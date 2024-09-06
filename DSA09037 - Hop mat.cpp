#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int k, n, m;
int a[101];
vector<int> ke[1001];
bool visited[1001];
map<int, int> mp;

void inp()
{
	cin >> k >> n >> m;
	for (int i = 0; i < k; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
	{
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
	}
	memset(visited, false, sizeof(visited));
 } 
 
void dfs(int u)
{
	mp[u]++;
	visited[u] = true;
	for (int v : ke[u])
	{
		if (!visited[v])
		{
			dfs(v);
		}
	}
}
int main()
{
	inp();
	for (int i = 0; i < k; i++)
	{
		memset(visited, false, sizeof(visited));
		dfs(a[i]);
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		if (mp[i] == k)  ++cnt;
	}
	cout << cnt;
}

