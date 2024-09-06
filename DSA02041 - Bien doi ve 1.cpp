#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, res;

void Try(int n, int cnt)
{
	if (n == 1)
	{
		res = min(res, cnt);
		return;
	}
	if (n % 3 == 0 && cnt + 1 < res)
	{
		Try(n/3, cnt + 1);
	}
	if (n % 2 == 0 && cnt + 1 < res)
	{
		Try(n/2, cnt + 1);
	}
	if (cnt + 1 < res) Try(n - 1, cnt + 1);
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		res = n;
		Try(n, 0);
		cout << res << endl;
	 } 
}

