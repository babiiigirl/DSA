#include <bits/stdc++.h>
using namespace std;

int snt(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return n > 1;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int check = 0;
		for (int i = 2; i <= n/2; i++)
		{
			if (snt(i) && snt(n - i))
			{
				check = 1;
				cout << i << " " << n - i << endl;
				break;
			}
		}
		if(!check)	cout << - 1 << endl;
	}
}
