#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll floor(ll a[], int n, ll x) 
{
	ll res = -1, l = 0, r = n - 1;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (a[mid] <= x)
		{
			res = mid + 1;
			l = mid + 1;
		}
		else
			r = mid - 1;
	}
	return res;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		ll x; cin >> x;
		ll a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		cout << floor(a, n, x) << endl;
	}
}

