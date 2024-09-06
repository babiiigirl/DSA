#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9 + 7;

ll c[1005][1005];

void tohop()
{
	for (int i = 0; i <= 1000; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (i == j || j == 0)
				c[i][j] = 1;
			else
			{
				c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
				c[i][j] %= mod;
			} 
		}
	}
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		tohop();
		int n, k; cin >> n >> k;
		cout << c[n][k] << endl;
	}
}

