#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<string> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		set<char> s;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < v[i].length(); j++)
				s.insert(v[i][j]);
		}
		for(auto x : s)
			cout << x << " ";
		cout << endl;
	}
}
