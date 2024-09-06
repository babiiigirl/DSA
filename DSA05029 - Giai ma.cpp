#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int f[50];

bool check(string s, int i)
{
	return (s[i - 1] == '1' || s[i - 1] == '2' && s[i] <= '6');
}

void solve()
{
	string s; cin >> s;
		int n = s.length();
		s = "0" + s;
		f[0] = 1;
		for (int i = 1; i <= n; i++)
		{
			if (s[i] == '0')
			{
				if (i == 1 || (s[i - 1] != '1' && s[i - 1] != '2'))
				{
					cout << 0 << endl;
					return; 
				}
				f[i] += f[i - 2];
			}
			else
			{
				f[i] += f[i - 1];
				if (i >= 2 && check(s, i))
					f[i] += f[i - 2];
			}
		}
	cout << f[n] << endl;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		memset(f, 0, sizeof(f));
		solve();
	}
}

