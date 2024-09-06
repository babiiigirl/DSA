#include <bits/stdc++.h>
using namespace std;

int n, a[1005], final;

void ktao()
{
	for (int i = 1; i <= n; i++)
		a[i] = i;
}

void sinh()
{
	int i = n - 1;
	while (i >= 1 && a[i] > a[i + 1])
	{
		--i;
	}
	if (i == 0)
	{
		final = 1;
	}
	else
	{
		int j = n;
		while (a[j] < a[i])	--j;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
	}
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
				cout << a[i];
			cout << " ";
			sinh();
		}
		cout << endl;
	 } 
 } 
