#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.second < b.second;
 } 

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		pair<int, int> p[n];
		for (int i = 0; i < n; i++)
		{
			cin >> p[i].first >> p[i].second;
		}
		sort(p, p + n, cmp);
		int kt = p[0].second, cnt = 1;
		for (int i = 1; i < n; i++)
		{
			if (p[i].first >= kt)
			{
				++cnt;
				kt = p[i].second;
			}
		}
		cout << cnt << endl;
	}
}

