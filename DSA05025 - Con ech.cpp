#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
ll f[10000];

void conech()
{
	memset(f, 0, sizeof(f));
	f[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= min(i, 3); j++)
			f[i] += f[i - j];
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n;
		conech();
		cout << f[n] << endl;
	}
}

