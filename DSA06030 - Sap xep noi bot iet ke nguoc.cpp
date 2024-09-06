#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n];
		for (int &x : a)	
			cin >> x;
		vector<vector<int>> v;
		for (int i = 0; i < n - 1; i++)
		{
			bool check = false;
			for (int j = 0; j < n - 1 - i; j++)
			{
				if (a[j] > a[j + 1])
				{
					check = true;
					swap(a[j], a[j + 1]);
				}
			}
			vector<int> tmp;
			if (check)
			{
				for (int x : a)
					tmp.push_back(x);
				v.push_back(tmp);
			}
		}
		for (int i = v.size() - 1; i >= 0; i--)
		{
			cout << "Buoc " << i + 1 << ": ";
			for (int x : v[i])
				cout << x << " ";
			cout << endl;
		}
	}
}
