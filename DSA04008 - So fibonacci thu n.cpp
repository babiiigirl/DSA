#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct matran{
	ll f[2][2];
}; 

int mod = 1e9 + 7;

matran operator * (matran a, matran b)
{
	matran c;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			c.f[i][j] = 0;
			for (int k = 0; k < 2; k++)
			{
				c.f[i][j] += a.f[i][k] * b.f[k][j];
				c.f[i][j] %= mod;
			}
		}
	}
	return c;
}

matran pow(matran x, int n)
{
	if (n == 1)
		return x;
	matran tmp = pow(x, n / 2);
	if (n % 2 == 0)
		return tmp * tmp;
	else
		return tmp * tmp * x;
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		matran a;
		a.f[0][0] = a.f[1][0] = a.f[0][1] = 1;
		a.f[1][1] = 0;
		matran res = pow(a, n);
		cout << res.f[1][0] << endl;
	}
}

