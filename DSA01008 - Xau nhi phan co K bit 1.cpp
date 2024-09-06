#include <bits/stdc++.h>
using namespace std;

int n, a[1005], final;

void ktao()
{
	for (int i = 1; i <= n; i++)
		a[i] = 0;
}

void sinh()
{
	int i = n;
	while (i >= 1 && a[i] == 1)
	{
		a[i] = 0;
		--i;
	}
	if (i == 0)
	{
		final = 1;
	}
	else
		a[i] = 1;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n;
		ktao();
		int k; cin >> k;
		final = 0;
		while (!final)
		{
			int dem = 0;
			for (int i = 1; i <= n; i++)
			{
				dem += a[i];
			}
			//cout << dem << " ";
			if (dem == k)
			{
				for (int i = 1; i <= n; i++)
					cout << a[i];
				cout << endl;
			}
			sinh();
		}
	}
}
