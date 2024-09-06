#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		ll n; cin >> n;
		ll a[n], b[n - 1];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n - 1; i++)
			cin >> b[i];
		for (int i = 0; i < n; i++)
		{
			if (a[i] == b[i])
				continue;
			else
			{
				cout << i + 1 << endl;
				break;
			}
		}
	} 
}
