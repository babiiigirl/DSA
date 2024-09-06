#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int n; cin >> n;
	int f[n + 1] = {};
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		f[x] = f[x - 1] + 1;
	}
	cout << n - *max_element(f, f + n + 1);
}

