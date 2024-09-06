#include<bits/stdc++.h>
using namespace std;

int n, k, x[100];
vector<vector<int>> v;

void Try(int i)
{
	for (int j = x[i - 1] + 1; j <= n - k + i; j++)
	{
		x[i] = j;
		if (i == k)
		{
			vector<int> tmp(x + 1, x + k + 1);
			v.push_back(tmp);
		}
		else Try(i + 1);
	}
}

bool check(vector<int> b)
{
	for (int i = 0; i < b.size(); i++)
	{
		if (x[i + 1] != b[i])
			return false;
	}
	return true;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> k;
		for (int i = 1; i <= k; i++)
			cin >> x[i];
		Try(1);
		for (int i = 1; i < v.size(); i++)
		{
			if (check(v[i]))
			{
				for (auto it : v[i - 1])
					cout << it << " ";
			}
		}
		int ok = 1;
		for (int i = 1; i <= k; i++)
		{
			if (x[i] != i)
			{
				ok = 0;
				break;
			}
		}
		if (ok)
		{
			for (int i = n - k + 1; i <= n; i++)
				cout << i << " ";
		}
		cout << endl;
		v.clear();
	}
}
