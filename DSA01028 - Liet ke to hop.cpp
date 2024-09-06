#include <bits/stdc++.h>
using namespace std;

int a[1001], final = 0, k, n;

void ktao()
{
	for (int i = 0; i < k; i++)
		a[i] = i;
}

void sinh()
{
	int i = k - 1;
	while (i >= 0 && a[i] == n - k + i)
		--i;
	if (i == -1)
		final = 1;
	else
	{
		a[i]++;
		for (int j = i + 1; j < k; j++)
			a[j] = a[j - 1] + 1;
	}
}

int main()
{
	int m;
	cin >> m >> k;
	set<int> s;
	for (int i = 0; i < m; i++)
	{
		int x; cin >> x; 
		s.insert(x);
	}
	vector<int> v;
	for (auto x : s)
		v.push_back(x);
	ktao();
	n = v.size();
	while (!final)
	{
		for (int i = 0; i < k; i++)
		{
			cout << v[a[i]] << " ";
		}
		cout << endl;
		sinh();
	}
	return 0;
}
