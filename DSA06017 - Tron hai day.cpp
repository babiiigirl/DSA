#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, m; cin >> n >> m;
		int a[n], b[m];
		vector<int> v;
		for (int &x : a)
		{
			cin >> x; 
			v.push_back(x);
		}
		for (int &x : b)
		{
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		for (auto x : v)
			cout << x << " ";
		cout << endl;
	}
 } 
