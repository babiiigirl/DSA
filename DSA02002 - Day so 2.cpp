#include <bits/stdc++.h>
using namespace std;

int n, a[100];

vector<vector<int>> v;


void Try(int i)
{
	if (i == 0)
		return;
	else
	{		
		vector<int> tmp;
		for (int j = 1; j <= i; j++)
		{
			tmp.push_back(a[j]);
		}
		v.push_back(tmp);
	}
	for (int j = 1; j < i; j++)
		a[j] += a[j + 1];
	Try(i - 1);
 } 

int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		Try(n);
		for (int i = v.size() - 1; i >= 0; i--)
		{	
			cout << "[";
			for (int j = 0; j < v[i].size(); j++)
			{
				cout << v[i][j];
				if (j < v[i].size() - 1)	cout << " ";
			}
			cout << "] ";
		}
		cout << endl;
		v.clear();
	}
}
