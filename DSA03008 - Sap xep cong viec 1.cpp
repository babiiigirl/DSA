#include <bits/stdc++.h>
using namespace std;

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
		int s[n], f[n];
		for (int i = 0; i < n; i++)
		{
			cin >> s[i];
			p[i].first = s[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> f[i];
			p[i].second = f[i];
		}
		sort(p, p + n, cmp);
		int cnt = 1, kt = p[0].second;
		for (int i = 1; i < n; i++)
		{
			if (p[i].first >= kt)
			{
				cnt++;
				kt = p[i].second;
			}
		} 
		cout << cnt << endl;
	}
}

