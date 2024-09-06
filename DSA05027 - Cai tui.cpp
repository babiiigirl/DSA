#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f[1001][1001];

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, v; cin >> n >> v;
		int a[n + 1], c[n + 1];
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		for (int i = 1; i <= n; i++)
			cin >> c[i];
		memset(f, 0, sizeof(f));
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= v; j++)
			{
				if (j >= a[i])
					f[i][j] = max(f[i - 1][j], c[i] + f[i - 1][j - a[i]]);
				else
					f[i][j] = f[i - 1][j];
			}
		}
		cout << f[n][v] << endl;
	}
}

