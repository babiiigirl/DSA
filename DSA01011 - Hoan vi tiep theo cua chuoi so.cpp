#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void next(int a[], int n)
{
	int i = n - 1;
	while (a[i] >= a[i + 1] && i > 0)
		--i;
	if (i == 0)
	{
		cout << "BIGGEST";
		return;
	}
	else
	{
		int j = n;
		while (a[j] <= a[i]) --j;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
		for (int x = 1; x <= n; x++)
			cout << a[x];
	 } 
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int test; cin >> test;
		string s; cin >> s;
		int a[101];
		int n = s.length();
		for (int i = 0; i < n; i++)
		{
			a[i + 1] = s[i] - '0';
		}
		cout << test << " ";
		next(a, n);
		cout << endl;
	 } 
}

