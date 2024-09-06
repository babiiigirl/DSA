#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s;  cin >> s;
		int n = s.size();
		s = "0" + s;
		bool d[n + 1][n + 1];
		memset(d, false, sizeof(d));
		int res = 0;
		for (int i = 1; i <= n; i++) d[i][i] = true;
		for (int len = 2; len <= n; len++)
		{
			for (int j = 1; j <= n - len + 1; j++)
			{
				int k = j + len - 1;
				if (len == 2 && s[j] == s[k]) d[j][k] = true;
				else if (len > 2 && s[j] == s[k] && d[j + 1][k - 1] == true)
					d[j][k] = true;
				else
					d[j][k] = false;
				if (d[j][k] == true)
					res = max(res, k - j + 1);
			}
		}
		cout << res << endl;
	}	
}

