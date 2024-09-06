#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

void Greater(int a[], int n, int g[])
{
	stack<int> s;
	for (int i = 0; i < n; i++)
	{
		while (!s.empty() && a[i] > a[s.top()])
		{
			g[s.top()] = i;
			s.pop();
		}
		s.push(i);
	}
	while (!s.empty())
	{
		g[s.top()] = -1;
		s.pop();
	}
}

void smaller(int a[], int n, int s[])
{
	stack<int> st;
	for (int i = 0; i < n; i++)
	{
		while (!st.empty() && a[i] < a[st.top()])
		{
			s[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while (!st.empty())
	{
		s[st.top()] = -1;
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
		int a[n], g[n], s[n];
		for (int &x : a)
			cin >> x;
		Greater(a, n, g);
		smaller(a, n, s);
		for (int i = 0; i < n; i++)
		{
			if (g[i] != -1 && s[g[i]] != -1)
				cout << a[s[g[i]]] << " ";
			else
				cout << -1 << " ";
		}
		cout << endl;
	}
}