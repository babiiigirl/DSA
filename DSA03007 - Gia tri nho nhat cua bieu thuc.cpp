#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		ll a[n], b[n];
		for (ll &x : a)	cin >> x;
		for (ll &x : b)	cin >> x;
		sort(a, a + n);
		sort(b, b + n, greater<ll>());
		ll s = 0;
		for (int i = 0; i < n; i++)
			s += a[i] * b[i];
		cout << s << endl;
	}
}

