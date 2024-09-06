#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, a[100], final, cnt; 

void ktao()
{
	cnt = 1;
	a[1] = n;
	final = 0;
}

void sinh()
{
	int i = cnt;
	while (i > 0 && a[i] == 1)
		--i;
	if (i == 0)
		final = 1;
	else
	{
		a[i]--;
		int d = cnt - i + 1;
		cnt = i;
		int q = d / a[i], r = d % a[i];
		for (int j = 1; j <= q; j++)
		{
			a[i + j] = a[i];
			++cnt;
		 } 
		if (r != 0)
		{
			++cnt;
			a[cnt] = r; 
		}
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n;
		ktao();
		while (!final)
		{
			cout << "(";
			for (int i = 1; i < cnt; i++)
				cout << a[i] << " ";
			cout << a[cnt] << ") ";
			sinh();
		}
		cout << endl; 
	}
}

