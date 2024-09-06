#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

int c[256];

int main()
{
	//IO();
	int t; cin >> t;
	while (t--)
	{
		memset(c, 0, sizeof(c));
		int k; cin >> k;
		string s; cin >> s;
		for (int i = 0; i < s.length(); i++)
			c[s[i]]++;
		priority_queue<int> q;
		for (int i = 0; i < 256; i++)
		{
			if (c[i])
				q.push(c[i]);
		}
		while (k-- && !q.empty())
		{
			int j = q.top(); q.pop();
			if (j > 1) q.push(j - 1);
		}
		long long res = 0;
		while (!q.empty())
		{
			int x = q.top(); q.pop();
			res += 1ll * x * x;
		}
		cout << res << endl;
	}
}