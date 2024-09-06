#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f[100];

void ktao()
{
	f[1] = 1; f[2] = 1;
	for (int i = 3; i <= 92; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
}

char fibo(int n, ll k)
{
	if (n == 1)
		return '0';
	if (n == 2)
		return '1';
	if (k <= f[n - 2])
		return fibo(n - 2, k);
	return fibo(n - 1, k - f[n - 2]);
 } 

int main()
{
	ktao();
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		ll k; cin >> k;
		cout << fibo(n, k) << endl;
	}
}

