#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mod = 1e9 + 7;

ll rev(ll n)
{
	ll r = 0;
	while(n)
	{
		r = r * 10 + n % 10;
		n /= 10; 
	}
	return r;
}

ll binpow(ll n, ll m)
{
	if (m == 0)
		return 1;
	ll tmp = binpow(n, m/2) % mod;
	if (m % 2 == 0)
		return (tmp % mod * tmp % mod) % mod;
	else
		return (tmp % mod) * (tmp % mod) % mod * n % mod;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		ll n; cin >> n;
		cout << binpow(n, rev(n)) << endl;
	}
}

