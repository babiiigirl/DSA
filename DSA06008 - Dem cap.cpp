#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// x < y: x^y > y^x ;ngoai le: (2,3); (2,4)
// x = 0: khong co truong hop nao
// x = 1: y = 0
// x = A: y = 0, 1
// x = 3: y = 2, y > 3

int cnt[5];

int count(int y[], int m, int x)
{
	if (x == 0)
		return 0;
	if (x == 1)
		return cnt[0];
	ll res = cnt[0] + cnt[1];
	auto it = upper_bound(y, y + m, x);
	res += (y + m) - it;
	if (x == 2)
		res -= (cnt[3] + cnt[4]);
	if (x == 3)
		res += cnt[2];
	return res;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, m; cin >> n >> m;
		int x[n], y[m];
		for (int i = 0; i < n; i++)
			cin >> x[i];
		for (int i = 0; i < m; i++)
		{
			cin >> y[i];
			if (y[i] <= 4)
				cnt[y[i]]++;
		}
		sort(y, y + m);
		ll ans = 0;
		for (auto it : x)
		{
			ans += count(y, m, it);
		}
		cout << ans << endl;
		memset(cnt, 0, sizeof(cnt));
		
	}
 } 
