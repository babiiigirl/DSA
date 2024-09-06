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
		vector<vector<int>> v;
		cin >> n;
		ktao();
		while (!final)
		{
			vector<int> tmp(a + 1, a + cnt + 1);
			v.push_back(tmp);
			sinh();
		}
		cout << v.size() << endl;
		for (int i = 0; i < v.size(); i++)
		{
			cout << "(";
			for (int j = 0; j < v[i].size(); j++)
			{
				cout << v[i][j];
				if (j < v[i].size() - 1) cout << " ";
			}
			cout << ") ";
		}
		cout << endl; 
	}
}

