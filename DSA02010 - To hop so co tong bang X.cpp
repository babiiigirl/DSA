#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, s, x[100], a[100], sum, check;

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
				cout << "[";
				for (int k = 1; k <= i; k++)
				{
					cout << x[k];
					if (k < i) cout << " ";
				}
				cout << "]";
			}
			else Try(i + 1, j);
			sum -= a[j];
		}	
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		sum = 0, check = 0;
		cin >> n >> s;
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		sort(a + 1, a + n + 1);
		Try(1, 1);
		if (!check)
			cout << "-1";
		cout << endl;
	}
}
