#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int c[8][8];
pair<int, int> p[8] = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

void ktao()
{
	for (int i = 1; i <= 8; i++)
		for (int j = 1; j <= 8; j++)
			c[i][j] = -1;
}

void BFS(pair<int, int> a, pair<int, int> b)
{
	if (a == b)
	{
		cout << 0 << endl;
		return;
	}
	ktao();
	queue<pair<int, int>> q;
	q.push(a);
	c[a.first][a.second] = 0;
	while (!q.empty())
	{
		pair<int, int> top = q.front(); q.pop();
		for (int i = 0; i < 8; i++)
		{
			int in = top.first + p[i].first;
			int jn = top.second + p[i].second;
			if (in >= 1 && in <= 8 && jn >= 1 && jn <= 8 && c[in][jn] == -1)
			{
				q.push({in, jn});
				c[in][jn] = c[top.first][top.second] + 1;
			}
		}
		if (c[b.first][b.second] != -1) break;
	}
	cout << c[b.first][b.second] << endl;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		pair<int, int> a, b;
		string s1, s2; cin >> s1 >> s2;
		a.first = s1[0] - 'a' + 1; 
		a.second = s1[1] - '0';
		b.first = s2[0] - 'a' + 1;
		b.second = s2[1] - '0';
		BFS(a, b);
	}
}
