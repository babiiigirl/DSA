#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

ll merge(ll a[], int l, int m, int r)
{
	int n1 = m - l + 1, n2 = r - m;
	ll x[n1], y[n2];
	for (int i = l; i <= m; i++)
		x[i - l] = a[i];
	for (int i = m + 1; i <= r; i++)
		y[i - m - 1] = a[i];
	int i = 0, j = 0, idx = l;
	ll cnt = 0;
	while (i < n1 && j < n2)
	{
		if (x[i] <= y[j])
			a[idx++] = x[i++];
		else
		{
			a[idx++] = y[j++];
			cnt = cnt + (n1 - i);
		}
	}
	while (i < n1)
		a[idx++] = x[i++];
	while (j < n2)
		a[idx++] = y[j++]; 
	return cnt; 
 } 

ll mergeSort(ll a[], int l, int r)
{
	ll cnt = 0;
	if (l < r)
	{
		int m = (l + r) / 2;
		cnt += mergeSort(a, l, m);
		cnt += mergeSort(a, m + 1, r);
		cnt += merge(a, l, m, r);
	}
	return cnt;
}

int main()
{
	//IO();
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		ll a[n];
		for (ll &x : a)
			cin >> x;
		cout << mergeSort(a, 0, n - 1) << endl;
	}
}

