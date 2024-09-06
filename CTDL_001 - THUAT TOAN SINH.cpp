#include <bits/stdc++.h>

using namespace std;

int a[100], n, final = 1;

void ktao()
{
	for (int i = 1; i <= n; i++)
		a[i] = 0;
}

void in()
{
	for (int i = 1; i <= n; i++)
		cout << a[i] << " ";
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
		final = 0;
	else
		a[i] = 1;	
}

bool check(int a[], int n)
{
	int l = 1, r = n;
	while (l <= r)
	{
		if (a[l] != a[r])
			return false;
		++l; --r;
	}
	return true;
}

int main()
{
	cin >> n;
	ktao();
	while (final)
	{
		if (check(a, n))
		{
			in();
			cout << endl;
		}
		sinh();
	}
}
