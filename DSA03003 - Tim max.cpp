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
		for (int &x : a)
			cin >> x;
		sort(a, a + n);
		ll sum = 0; 
		for (int i = 0; i < n; i++){
			sum += 1ll * a[i] * i;
			sum %= mod; 
		}
		cout << sum << endl;
	 } 
}

