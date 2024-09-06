#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mod = 1e9 + 7;

ll binpow(ll a, ll b)
{
	if (b == 0)
		return 1;
	ll tmp = binpow(a, b/2);
	if (b % 2 == 0)
		return (tmp % mod) * (tmp % mod) % mod;
	else
		return ((tmp % mod) * (tmp % mod) % mod)* (a % mod) % mod;
}
int main()
{
	while (1)
	{
		ll a, b; cin >> a >> b;
		if (a == 0 && b == 0)
			return 0;
		else
			cout << binpow(a, b) << endl;
	}
}

