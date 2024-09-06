#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			int pos = i;
			for (int j = i + 1; j < n; j++)
				if (a[pos] > a[j])
					pos = j;
			if (pos != i)
				++cnt;
			swap(a[i], a[pos]);
			//cout << a[i] << " ";
		}
		cout << cnt << endl;
	}
}
