#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, s; cin >> n >> s;
		int a[n + 1];
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		bool f[n + 1][s + 1];
		memset(f, false, sizeof(f));
		for (int i = 0; i <= n; i++)
			f[i][0] = true;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= s; j++)
			{
				if (j >= a[i])
					f[i][j] = f[i - 1][j - a[i]] || f[i - 1][j];
				else
					f[i][j] = f[i - 1][j]; 
			}
		 } 
		if (f[n][s])
			cout << "YES\n";
		else
			cout << "NO\n";
	 } 
}

