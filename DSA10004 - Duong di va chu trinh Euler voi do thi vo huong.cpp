#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int v, e;
bool visited[1005];
vector<int> ke[1005];

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
 
int Euler()
{
	int cnt = 0;
	for (int i = 1; i <= v; i++)
	{
		if (ke[i].size() % 2 != 0)
			++cnt;
	}
	if (cnt == 2)	return 1;
	if (cnt == 0)	return 2;
	return 0;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		input();
		cout << Euler() << endl;
		for (int i = 0; i < 1005; i++)
			ke[i].clear(); 
	}
}

