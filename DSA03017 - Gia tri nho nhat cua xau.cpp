#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int c[256];

int main()
{
	int t; cin >> t;
	while (t--)
	{
		memset(c, 0, sizeof(c));
		int k; string s;
		cin >> k >> s;
		for (int i = 0; i < s.length(); i++)
			c[s[i]]++;
		priority_queue<int> Q;
		for (int i = 0; i < 256; i++)
			if(c[i])	Q.push(c[i]);
			
		while (k-- && Q.size())
		{
			int j = Q.top(); Q.pop();
			if (j > 1)
				Q.push(j - 1);
		}
		int res = 0;
		while (!Q.empty())
		{
			int x = Q.top(); Q.pop();
			res += x * x;
		}
		cout << res << endl;
	}
}

