#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, p, s, x[100];
vector<int> a;
vector<vector<int>> v;

int snt(int a)
{
	if (a <= 1)
		return 0;
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
 } 
 
void Try(int i, int pos, int sum)
{
	for (int j = pos; j < a.size(); j++)
	{
		x[i] = a[j];
		if (i == n)
		{
			if (sum + a[j] == s)
			{
				vector<int> tmp(x + 1, x + i + 1);
				v.push_back(tmp);
			}
		}
		else Try(i + 1, j + 1, sum + a[j]);
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> p >> s;
		for (int i = p + 1; i <= s; i++)
		{
			if (snt(i))
				a.push_back(i);
		}
		Try(1, 0, 0);
		cout << v.size() << endl;
		for (int i = 0; i < v.size(); i++)
		{
			for (auto it : v[i])
				cout << it << " ";
			cout << endl;
		}
		v.clear();
		a.clear();
	}
}
