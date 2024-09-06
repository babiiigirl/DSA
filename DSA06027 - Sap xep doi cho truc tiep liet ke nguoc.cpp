#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		vector<vector<int>> v;
		int n; cin >> n;
		int a[n];
		for (int i = 0 ; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] > a[j])	
					swap(a[i], a[j]);
			}
			vector<int> tmp;
			for (int x : a)
				tmp.push_back(x);
			v.push_back(tmp);
		}
		for (int i = v.size() - 1; i >= 0; i--)
		{
			cout << "Buoc " << i + 1 << ": ";
			for (auto x : v[i])
			{
				cout << x << " ";
			}
			cout << endl;
		}
	} 
}
