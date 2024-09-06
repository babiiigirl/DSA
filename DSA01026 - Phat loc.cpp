#include <bits/stdc++.h>
using namespace std;

// 8 : 1, 6 : 0

int n, final = 0, a[100];

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
		final = 1;
	else
		a[i] = 1;
}

bool check()
{
	if (a[1] == 0 || a[n] == 1)
		return false;
	for (int i = 1; i <= n - 1; i++)
	{
		if(a[i] == 1 && a[i + 1] == 1)
			return false;
	}
	for (int i = 1; i <= n - 3; i++)
	{
		if (a[i] == 0 && a[i + 1] == 0 && a[i + 2] == 0 && a[i + 3] == 0)
			return false;
	}
	return true;
}

int main()
{
	cin >> n;
	ktao();
	while (!final)
	{
		if (check())
		{
			for (int i = 1; i <= n; i++)
			{
				if (a[i] == 0)
					cout << '6';
				else
					cout << '8';
			}
			cout << endl;
		}
		sinh();	
	}
}
