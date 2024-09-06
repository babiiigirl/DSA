#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, x[100], a[100], sum;
vector<vector<int>> v;

void Try(int i, int pos)
{
	for (int j = pos; j <= n; j++)
	{
		x[i] = a[j];
		sum += a[j];
		if (sum % 2)
		{
			vector<int> res;
			for (int k = 1; k <= i; k++)
			{
				res.push_back(x[k]);
			}
			v.push_back(res);
		}
		Try(i + 1, j + 1);
		sum -= a[j];
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		sort(a + 1, a + n + 1, greater<int>());
		Try(1, 1);
		sort(v.begin(), v.end());
		for (int i = 0; i < v.size(); i++)
		{
			sort(v[i].begin(), v[i].end(), greater<int>());
			for (auto x : v[i])
			{
				cout << x << " ";
			}
			cout << endl;
		}
		v.clear();
	} 
}
