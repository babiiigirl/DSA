#include <bits/stdc++.h>

using namespace std;

void next(int a[], int n, int k)
{
	int i = k;
	while (i >= 1 && a[i] == n - k + i)
	{
		--i;
	}
	if (i == 0)
	{
		for (int i = 1; i <= k; i++)
		{
			a[i] = i;
		}
	}
	else
	{
		a[i]++;
		for (int j = i + 1; j <= k; j++)
		{
			a[j] = a[j - 1] + 1;
		}
	}
	for (int i = 1; i <= k; i++)
	{
		cout << a[i] << " ";
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		int a[k];
		for (int i = 1; i <= k; i++)
			cin >> a[i];
		next(a, n, k);
		cout << endl;
	}
 } 
