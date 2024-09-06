#include <bits/stdc++.h>
using namespace std;

int tien[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int cnt = 0, idx = 0;
		while (n)
		{
			cnt += n / tien[idx];
			n = n % tien[idx];
			++idx;
		}
		cout << cnt << endl;
	}
}

