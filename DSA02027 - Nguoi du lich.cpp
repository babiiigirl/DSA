#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, c[100][100], x[100], cmin = INT_MAX; 
int visited[100];
int dis, ans = INT_MAX;

void Try(int i)
{
	for (int j = 1; j <= n; j++)
	{
		if (!visited[j])
		{
			x[i] = j;
			visited[j] = 1;
			dis += c[x[i - 1]][x[i]];
			if (i == n)
			{
				ans = min(ans, dis + c[x[n]][1]);
			}
			else if (dis + (n - i + 1) * cmin < ans)
				Try(i + 1);
			visited[j] = 0;
			dis -= c[x[i - 1]][x[i]];
		}
	}
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> c[i][j];
			if (c[i][j])	cmin = min(cmin, c[i][j]);
		}
	}
	x[1] = 1; visited[1] = 1;
	Try(2);
	cout << ans << endl;
}

