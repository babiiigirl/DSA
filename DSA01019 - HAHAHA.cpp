#include <bits/stdc++.h>
using namespace std;

//0 : A, 1 : H 

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

bool check()
{
	if (a[1] == 0 || a[n] == 1)
		return false;
	for (int i = 1; i <= n - 1; i++)
	{
		if (a[i] == 1 && a[i + 1] == 1)
			return false;
	 } 
	return true;
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
			if (check())
			{
				for (int i = 1; i <= n; i++)
				{
					if (a[i] == 0)
						cout << 'A';
					else
						cout << 'H'; 
				 } 
				cout << endl;
			}
			sinh();
		}
	}
}
