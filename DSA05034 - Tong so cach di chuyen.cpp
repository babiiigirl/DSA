#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mod = 1e9 + 7;
int n, k;
ll f[100005];

void staircase()
{
	memset(f, 0, sizeof(f));
	f[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= min(i, k); j++)
		{
			f[i] += f[i - j];
			f[i] %= mod;
		}
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> k;
		staircase();
		cout << f[n] << endl;
	}
}

