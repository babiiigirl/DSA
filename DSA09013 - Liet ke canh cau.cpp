#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int v, e;
set<int> ke[1000];
bool visited[1000];
vector<pair<int, int>> edge;

void input()
{
	cin >> v >> e;
	for (int i = 0; i < e; i++)
	{
		int x, y; cin >> x >> y;
		ke[x].insert(y);
		ke[y].insert(x);
		edge.push_back({x, y});
	}
	memset(visited, false, sizeof(visited));
 } 
 
void DFS(int u)
{
	visited[u] = true;
	for (int v : ke[u])
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
		int cc = tplt();
		for (auto e : edge)
		{
			int x = e.first, y = e.second;
			ke[x].erase(y);
			ke[y].erase(x);
			memset(visited, false, sizeof(visited));
			if (cc < tplt()) 
				cout << x << " " << y << " ";
			ke[x].insert(y);
			ke[y].insert(x);
		}
		for (int i = 0; i < 1000; i++)
			ke[i].clear();
		edge.clear();
		cout << endl;
	}
}

