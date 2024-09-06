#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, m; cin >> n >> m;
		int a[n], b[m];
		set<int> s;
		map<int, int> mp;
		for (int &x : a)
		{
			cin >> x;
			s.insert(x);
			mp[x]++;
		}
		for (int &x : b)
		{
			cin >> x;
			s.insert(x);
			mp[x]++;
		}
		for (auto x : s)
			cout << x << " ";
		cout << endl;
		for (auto x : mp)
		{
			if (x.second != 1)
				cout << x.first << " ";
		}
		cout << endl;
	}
}
