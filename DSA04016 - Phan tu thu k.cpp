#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void merge(int a[], int b[], int m, int n, int k)
{
	int x[n + m];
	int i = 0, j = 0, idx = 0;
	while (i < m && j < n)
	{
		if (a[i] <= b[j])
			x[idx++] = a[i++];
		else
			x[idx++] = b[j++];
	}
	while (i < m)
		x[idx++] = a[i++];
	while (j < n)
		x[idx++] = b[j++];
	cout << x[k - 1] << endl;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int m, n, k; cin >> m >> n >> k;
		int a[m], b[n];
		for (int &x : a)
			cin >> x;
		for (int &x : b)
			cin >> x;
		merge(a, b, m, n, k);
	 } 
}

