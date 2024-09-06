#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n + 1];
		ll d[n + 1] = {0};
		d[1] = a[1];
		for (int i = 1; i <= n; i++) cin >> a[i];
		for (int i = 2; i <= n; i++)
		{
			d[i] = max(d[i - 1], d[i - 2] + a[i]);
			//cout << d[i] << " ";
		}
		cout << d[n] << endl;
	}
}

