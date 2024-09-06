#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int f[1000][1000]; 

int main()
{
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	int t; cin >> t;
	while (t--)
	{
		string s, t; cin >> s >> t;
		memset(f, 0, sizeof(f));
		s = "0" + s; t = "0" + t;
		for (int i = 1; i < s.length(); i++)
		{
			for (int j = 1; j < t.length(); j++)
			{
				if (s[i] == t[j])
					f[i][j] = f[i - 1][j - 1] + 1;
				else
					f[i][j] = max(f[i - 1][j], f[i][j - 1]);
			}
		}
		cout << f[s.size() - 1][t.size() - 1] << endl;
	} 
}
