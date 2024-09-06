#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int count(int a[], int n)
{
	int l = 0, r = n - 1;
	int cnt = 0;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (a[mid] == 0)
		{
			cnt += (mid - l + 1);
			l = mid + 1;
		}
		else
			r = mid - 1;
	}
	return cnt;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n];
		for (int &x : a)
			cin >> x;
		if (a[n] == 0)
			cout << n << endl;
		else if (a[1] == 1)
			cout << 0 << endl;
		else
			cout << count(a, n) << endl;
	}
}

