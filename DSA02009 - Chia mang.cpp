#include <bits/stdc++.h>
using namespace std;

int n, k, cnt = 0, sum = 0, s;
int a[100], x[100];
 
void Try(int i, int pos)
{
    for (int j = pos; j <= n; j++)
    {
        x[i] = a[j];
        sum += a[j];
        if (sum == s) ++cnt;
        else Try(i + 1, j + 1);
        sum -= a[j];
    }
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		cnt = 0, sum = 0, s = 0;
		cin >> n >> k;
	    for (int i = 1; i <= n; i++)
	    {
	        cin >> a[i];
	        s += a[i];
	    }
	    if (s % k == 0)
	    {
	        s /= k;
	        Try(1, 1);
    	    if (cnt == k) cout << 1 << endl;
    	    else cout << 0 << endl;
	    }
	    else cout << 0 << endl;
	}
}
