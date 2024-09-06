#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k, a[1001], x[1001], sum, pos;
int dem = 0;
vector<vector<int>> v;

void Try(int i, int pos)
{
	for (int j = pos; j <= n; j++)
	{
		x[i] = a[j];
		sum += a[j];
		if (sum == k)
		{
			++dem;
			vector<int> tmp;
			for (int k = 1; k <= i; k++)
				tmp.push_back(x[k]);
			v.push_back(tmp);
		}
		else Try(i +1, j + 1);
		sum -= a[j]; 
	 } 
}

int main()
{
	cin >> n >> k;
	for (int i = 1; i <=n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	Try(1, 1);
	for (int i = v.size() - 1; i >= 0; i--)
	{
		for (auto it : v[i])
			cout << it << " ";
		cout << endl; 
	}
	cout << dem << endl;
}

