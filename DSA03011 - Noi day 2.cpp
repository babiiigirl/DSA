#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mod = 1e9 + 7;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n];
		priority_queue<ll, vector<ll>, greater<ll>> Q;
		for (int &x : a)
		{
			cin >> x;
			Q.push(x);
		 } 
		ll res = 0;
		while (Q.size() > 1)
		{
			ll first = Q.top(); Q.pop();
			ll second = Q.top(); Q.pop();
			Q.push((first%mod + second%mod) % mod);
			res = (res%mod + (first%mod + second%mod) % mod) % mod;
		}
		cout << res << endl;
	 } 
}
