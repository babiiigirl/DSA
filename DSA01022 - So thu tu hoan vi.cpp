#include <bits/stdc++.h>
using namespace std;

int n, a[1005], final;

void ktao()
{
	for (int i = 1; i <= n; i++)
		a[i] = i;
}

void sinh()
{
	int i = n - 1;
	while (i >= 1 && a[i] > a[i + 1])
		--i;
	if (i == 0)
		final = 1;
	else
	{
		int j = n;
		while (a[i] > a[j]) --j;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		vector<vector<int>> v;
		cin >> n;
		int x[100];
		final = 0;
		for (int i = 0; i < n; i++)
			cin >> x[i];
		ktao();
		while(!final)
		{
			vector<int> tmp (a + 1, a + n + 1);
			v.push_back(tmp);
			sinh();
		}
		for (int i = 0; i < v.size(); i++)
		{
			bool check = true;
			for (int j = 0; j < n; j++)
			{
				if (x[j] != v[i][j])
				{
					check = false;
					break;
				}
			}
			if (check)
			{
				cout << i + 1 << endl;
				break; 
			}
		}
	}
}
