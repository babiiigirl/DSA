#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll minSum(int x[], int n)
{
	sort(x, x + n);
	ll a = 0, b = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2)
			a = a * 10 + x[i];
		else
			b = b * 10 + x[i]; 
	}
	return (a + b); 
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		cout << minSum(a, n) << endl; 
	}
}

