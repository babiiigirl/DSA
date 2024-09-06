#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n];
		for (int &x : a)
			cin >> x;
		int cp[n];
		copy(a, a + n, cp);
		sort(a, a + n);
		int check = 1;
		for (int i = 0; i < n; i++)
		{
			if (a[i] != cp[i] && a[i] != cp[n - i - 1])
			{
				check = 0;
				cout << "No\n";
				break;
			}
		}
		if (check)
			cout << "Yes\n";
	 } 
}

