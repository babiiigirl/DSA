#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, s, m; cin >> n >> s >> m;
		int need = s * m;
		int buy = n * (s - s/7);
		if (buy < need)
			cout << -1 << endl;
		else
			cout << ceil((1.0 * need) / (1.0 * n)) << endl; 
	 } 
}

