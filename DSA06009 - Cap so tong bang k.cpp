#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		int a[n];
		for(int &x : a)
			cin >> x;
		sort(a, a + n);
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			auto l = lower_bound(a + i + 1, a + n, k - a[i]);
			auto r = upper_bound(a + i + 1, a + n, k - a[i]);
			cnt += r - l;
		}
		cout << cnt << endl;
	}
}
