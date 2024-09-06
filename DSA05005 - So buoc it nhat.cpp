#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		int f[n];
		for (int i = 0; i < n; i++)
		{
			f[i] = 1;
			for (int j = 0; j < i; j++)
			{
				if (a[i] >= a[j])
					f[i] = max(f[i], f[j] + 1);
			}
		}
		int max = INT_MIN;
		for (int i = 0; i < n; i++)
		{
		    if (max < f[i])
		        max = f[i];
		}
		cout << n - max << endl;
	 } 
}
