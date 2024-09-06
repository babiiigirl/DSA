#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int v, e;
bool visited[1000];
vector<int> ke[1000];

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
 } 

void DFS(int u)
{
	visited[u] = true;
	for (auto v : ke[u])
	{
		if (!visited[v])
			DFS(v);
	}
}

int tplt()
{
	int cnt = 0;
	for (int i = 1; i <= v; i++)
	{
		if (!visited[i])
		{
			++cnt;
			DFS(i);
		}
	}
	return cnt;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		input();
		int dinh = tplt();
		for (int i = 1; i <= v; i++)
		{
			memset(visited, false, sizeof(visited));
			visited[i] = true;
			if (dinh < tplt())
				cout << i << " ";		 
		} 
		for (int i = 0; i < 1000; i++)
			ke[i].clear();
		cout << endl;
	 } 
}

