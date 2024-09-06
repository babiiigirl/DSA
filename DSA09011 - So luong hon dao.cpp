#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, a[1000][1000]; 
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1}; 

void nhap()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
}

void loang(int i, int j)
{
	a[i][j] = 0;
	for (int k = 0; k < 8; k++)
	{
		int i1 = i + dx[k], j1 = j + dy[k];
		if (a[i1][j1] && i1 >= 0 && i1 < n && j1 >= 0 && j1 < m)
			loang(i1, j1); 
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		nhap();
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (a[i][j])
				{
					++cnt;
					loang(i, j);
				}
			}
		}
		cout << cnt << endl;
	}
}

