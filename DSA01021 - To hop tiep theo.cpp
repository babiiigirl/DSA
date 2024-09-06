#include <bits/stdc++.h>
using namespace std;

int n, k, a[1005], b[1005]; 

void next()
{
	for (int i = 1; i <= k; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	int i = k;
	while (i >= 1 && a[i] == n - k + i)
	{
		--i; 
	}
	if (i == 0)
	{
		cout << k << endl;
	}
	else
	{
		a[i]++;
		for (int j = i + 1; j <= k; j++)
		{
			a[j] = a[j - 1] + 1; 
		}
		int dem = 0;
		for (int x = 1; x <= k; x++)
		{
			for (int y = 1; y <= k; y++)
			{
				if (a[x] == b[y])
					++dem;
			}
		}
		cout << k - dem << endl;
	}
	
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> k;
		next();
	}
}
