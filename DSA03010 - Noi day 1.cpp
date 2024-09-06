#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n];
		for (int &x : a)	cin >> x;
		priority_queue<ll, vector<ll>, greater<ll>> Q(a, a + n);
		ll res = 0;
		while (Q.size() > 1)
		{
			ll first = Q.top(); Q.pop();
			ll second = Q.top(); Q.pop();
			res += first + second;
			Q.push(first + second);
		}
		cout << res << endl;
	 } 
}

