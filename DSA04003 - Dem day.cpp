#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mod = 123456789;
 
ll binpow(ll a, ll m)
{
	if (m == 0)
		return 1;
	ll tmp = binpow(a, m/2) % mod;
	if (m % 2 == 0)
		return (tmp % mod * tmp % mod) % mod;
	else
		return (tmp % mod) * (tmp % mod) % mod * a % mod;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		ll n; cin >> n;
		cout << binpow(2, n - 1) << endl;
	}
}
