#include <bits/stdc++.h>
using namespace std;

int n, k, a[1005], final;

void ktao()
{
	for (int i = 1; i <= k; i++)
		a[i] = i;
}

void sinh()
{
	int i = k;
	while (i >= 1 && a[i] == n - k + i)
		--i;
	if (i == 0)
		final = 1;
	else
	{
		a[i]++;
		for (int j = i + 1; j <= k; j++)
			a[j] = a[j - 1] + 1;
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		vector<vector<int>> v;
		cin >> n >> k;
		int x[100];
		final = 0;
		for (int i = 0; i < k; i++)
			cin >> x[i];
		ktao();
		while(!final)
		{
			vector<int> tmp (a + 1, a + k + 1);
			v.push_back(tmp);
			sinh();
		}
		for (int i = 0; i < v.size(); i++)
		{
			bool check = true;
			for (int j = 0; j < k; j++)
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
