#include <bits/stdc++.h>
using namespace std;

int a[100001];

int main()
{
	int t; cin >> t;
	while (t--)
	{
		unordered_map<int, int> mp;
		int n; cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			mp[a[i]]++;
		}
		bool check = false;
		for (int i = 0; i < n; i++)
		{
			if(mp[a[i]] > 1)
			{
				cout << a[i] << endl;
				check = true;
				break;
			}
		}
		if (!check)
			cout << "NO\n";
	}
 } 
