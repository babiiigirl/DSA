#include <bits/stdc++.h>
using namespace std;

int n = 8, x[100], cot[100], cheo1[100], cheo2[100], maxx = 0, a[100][100];

void Try(int i)
{
	for (int j = 1; j <= n; j++)
	{
		if (cot[j] == 0 && cheo1[i - j + n] == 0 && cheo2[i + j - 1] == 0)
		{
			x[i] = j;
			cot[j] = 1; cheo1 [i - j + n] = 1; cheo2[i + j - 1] = 1;
			if (i == n)
			{
				int sum = 0;
				for (int i = 1; i <= n; i++)
				{
					sum += a[i][x[i]];
				}
				maxx = max(maxx, sum);
			}
			else
				Try(i + 1);
			cot[j] = 0; cheo1[i - j + n] = 0; cheo2[i + j - 1] = 0;
		}
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		maxx = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
				cin >> a[i][j];
		}
		Try(1);
		cout << maxx << endl;
	}
}

