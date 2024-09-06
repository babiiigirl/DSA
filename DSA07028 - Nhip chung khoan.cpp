#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

void greater_left(int a[], int n, int d[])
{
	stack<int> s;
	for (int i = n - 1; i >= 0; i--)
	{
		while (!s.empty() && a[i] > a[s.top()])
		{
			d[s.top()] = i;
			s.pop();
		}
		s.push(i);
	}
	while (!s.empty())
	{
		d[s.top()] = -1;
		s.pop();
	}
}

int main()
{
	//IO();
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n], d[n];
		for (int &x : a) cin >> x;
		greater_left(a, n, d);
		for (int i = 0; i < n; i++)
			cout << i - d[i] << " ";
		cout << endl;
	}
}