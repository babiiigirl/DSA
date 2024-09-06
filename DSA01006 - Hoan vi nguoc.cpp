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
	{
		--i;
	}
	if (i == 0)
	{
		final = 1;
	}
	else
	{
		int j = n;
		while (a[j] < a[i])	--j;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
	}
 } 

int main()
{
	int t; cin >> t;
	while (t--)
	{
		vector<vector<int>> res;
		cin >> n;
		ktao();
		final = 0;
		while (!final)
		{
			vector<int> tmp;
			for (int i = 1; i <= n; i++)
			{
				tmp.push_back(a[i]);
			}
			res.push_back(tmp);
			sinh();
		}
		for (int i = res.size() - 1; i >= 0; i--)
		{
			for (int x : res[i])
				cout << x;
			cout << " ";
		}
		cout << endl;
	 } 
 } 
