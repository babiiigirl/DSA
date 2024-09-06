#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		int a[n];
		for (int &x : a)
			cin >> x;
		sort(a, a + n, greater<int>());
		int sum = 0;
		for (int &x : a)
			sum += x;
		int m = max(k, n - k);
		int s = 0;
		for (int i = 0; i < m; i++)
			s += a[i];
		cout << s - (sum - s) << endl;
	 } 
}

