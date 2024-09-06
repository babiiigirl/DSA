#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k, a[1001], b[1001];

void next()
{
	int i = k;
	while (a[i] == n - k + i && i > 0)
		--i;
	if (i == 0)
		cout << k << endl;
	else
	{
		a[i]++;
		for (int j = i + 1; j <= k; j++)
			a[j] = a[j - 1] + 1;
		int cnt = 0;
		for (int x = 1; x <= k; x++)
		{
			for (int y = 1; y <= k; y++)
				if (a[x] == b[y]) ++cnt;
		}
		cout << k - cnt << endl;
	}
} 

int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> k;
		for (int i = 1; i <= k; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		} 
		next();
	}
	
}

