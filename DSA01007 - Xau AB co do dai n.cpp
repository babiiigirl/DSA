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
		final = 0;
		while (!final)
		{
			for (int i = 1; i <= n; i++)
			{
				if (a[i] == 1)
					cout << 'B';
				else
					cout << 'A';
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
