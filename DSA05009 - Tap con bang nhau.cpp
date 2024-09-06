#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, a[101], x[101], s, check, sum;

void Try(int i, int pos)
{
	for (int j = pos; j <= n; j++)
	{
		if (sum + a[j] <= s)
		{
			x[i] = a[j];
			sum += a[j];
			if (sum == s)
			{
				check = 1;
				return;
			}
			else
				Try(i + 1, j + 1);
			sum -= a[j];
		}
	}
}  

int main()
{
	int t; cin >> t;
	while (t--)
	{
		check = 0; s = 0; 
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			s += a[i];
		}
		if (s % 2 != 0)
		{
			cout << "NO\n";
			return 0;
		}	
		s /= 2;
		sort(a + 1, a + n + 1);
		Try(1, 1);
		if (check)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
