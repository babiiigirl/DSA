#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

ll mod = 1e9 + 7;

int n, k;

struct matran
{
	ll f[100][100];
};

matran operator * (matran a, matran b)
{
	matran c;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c.f[i][j] = 0;
			for (int k = 0; k < n; k++)
			{
				c.f[i][j] += (a.f[i][k] * b.f[k][j]) % mod;
				c.f[i][j] %= mod;
			}
		}
	}
	return c;
}

matran binpow(matran a, int k)
{
	if (k == 1)
		return a;
	matran tmp = binpow(a, k/2);
	if (k % 2)
		return tmp * tmp * a;
	else
		return tmp * tmp;
}

int main()
{
	//IO();
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> k;
		matran x;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				cin >> x.f[i][j];
		}
		matran res = binpow(x, k);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				cout << res.f[i][j] << " ";
			cout << endl;
		}
	}
}