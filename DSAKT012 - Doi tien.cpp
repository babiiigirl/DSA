#include <bits/stdc++.h>
using namespace std;

int n, res, ok;
int a[100], x[100];
 
void Try(int pos, int cnt, int s)
{
	for (int j = pos; j <= n; j++)
	{
		if (a[j] > s) continue;
		if (a[j] == s)
		{
			res = min(res, cnt + 1);
			ok = 1;
		}
		else if (cnt + 1 < res)
			Try(j + 1, cnt + 1, s - a[j]);
	}
}

int main()
{
		res = 1e9; ok = 0;
		int s; cin >> n >> s;
	    for (int i = 1; i <= n; i++)
	    {
	        cin >> a[i];
	    }
	    sort(a + 1, a + n + 1, greater<int>());
	    Try(1, 0, s);
	    if (!ok) cout << -1 << endl;
	    else cout << res << endl;;
}
