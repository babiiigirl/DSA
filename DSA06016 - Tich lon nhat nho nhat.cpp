#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, m; cin >> n >> m;
		int a[n], b[m];
		for (int &x : a)
			cin >> x;
		for (int &x : b)
			cin >> x;
		sort(a, a + n);
		sort(b, b + m);
		cout << 1ll * a[n - 1] * b[0] << endl;
	}
}
