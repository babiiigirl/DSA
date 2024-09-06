#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, s, x[1000], a[1000];
vector<vector<int>> v;

void Try(int i, int pos, int sum)
{
	for (int j = pos; j <= n; j++)
	{
		if (sum + a[j] <= s) 
		{
			x[i] = a[j];
			if (sum + a[j] == s)
			{
				vector<int> tmp(x + 1, x + i + 1);
				v.push_back(tmp);
			}
			else Try(i + 1, j, sum + a[j]);
		}	
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> s;
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		sort(a + 1, a + n + 1);
		Try(1, 1, 0);
		if (v.size() == 0)
			cout << -1 << endl;
		else
		{
			cout << v.size() << " "; 
			for (int i = 0; i < v.size(); i++)
			{
				cout << "{";
				for (int j = 0; j < v[i].size(); j++)
				{
					cout << v[i][j];
					if (j < v[i].size() - 1) cout << " ";
				}
				cout << "} ";
			}
		}
		v.clear();
		cout << endl;
	}
}


