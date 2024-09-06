#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], x[100], check, sum;

void Try(int i, int pos)
{
	for (int j = pos; j <= n; j++)
	{
		x[i] = a[j];
		sum += a[j];
		if (sum == k)
		{
			check = 1;
			cout << "[";
			for (int k = 1; k <= i; k++)
			{
				cout << x[k];
				if (k < i)
					cout << " ";
			}
			cout << "] ";
		}
		else
			Try(i + 1, j + 1);
		sum -= a[j];
	}
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		check = 0;
		cin >> n >> k;
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		sort(a + 1, a + n + 1);
		Try(1, 1);
		cout << endl;
		if (!check)
			cout << -1 << endl;
	}
}

