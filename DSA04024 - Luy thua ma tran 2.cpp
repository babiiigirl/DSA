#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mod = 1e9 + 7;

int n, k;

struct matran{
	ll x[100][100]; 
};

matran operator * (matran a, matran b)
{
	matran c;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c.x[i][j] = 0;
			for (int k = 0; k < n; k++)
			{
				c.x[i][j] += a.x[i][k] * b.x[k][j];
				c.x[i][j] %= mod;
			}
		}
	}
	return c;
}

matran pow(matran a, int k)
{
	if (k == 1)
		return a;
	matran tmp = pow(a, k/2);
	if (k % 2 == 0)
		return tmp * tmp;
	else
		return tmp * tmp * a;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> k;
		matran m;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				cin >> m.x[i][j];
		}
		ll sum = 0;
		matran res = pow(m, k);
		for (int i = 0; i < n; i++)
		{
			sum += res.x[i][n - 1];
			sum %= mod;
		}
		cout << sum << endl;
	}
}

