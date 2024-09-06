#include <bits/stdc++.h>
using namespace std;

int n, k, final;
char a[1005];

void ktao()
{
	for (int i = 1; i <= k; i++)
		a[i] = i + 64;
}

void sinh()
{
	int i = k;
	while (i >= 1 && a[i] == n - k + i + 64)
		--i;
	if (i == 0)
		final = 1;
	else
	{
		a[i]++;
		for (int j = i + 1; j <= k; j++)
			a[j] = a[j - 1] + 1;
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> k;
		final = 0;
		ktao();
		while(!final)
		{
			for (int i = 1; i <= k; i++)
				cout << a[i];
			cout << endl;
			sinh();
		}
	}
} 
