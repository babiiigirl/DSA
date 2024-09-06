#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int n; cin >> n;
	int a[n];
	for (int &x : a)
		cin >> x;
	sort(a, a + n, greater<int>());
	int e = a[0] * a[1];
	int b = a[0] * a[1] * a[2];
	int c = a[n - 1] * a[n - 2];
	int d = a[0] * c;
	cout << max(e, max(b, max(c, d))) ;
}

