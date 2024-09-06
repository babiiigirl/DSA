#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

void solve(int a[], int n, int d[])
{
	stack<int> st;
	for (int i = 0; i < n; i++)
	{
		while (!st.empty() && a[i] > a[st.top()])
		{
			d[st.top()] = a[i];
			st.pop();
		}
		st.push(i);
	}
	while (!st.empty())
	{
		d[st.top()] = -1;
		st.pop();
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
		solve(a, n, d);
		for (int x : d)
			cout << x << " ";
		cout << endl;
	}
}