#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k, s, x[100], cnt = 0;

int check()
{
	int sum = 0;
	for (int i = 1; i <= k; i++)
		sum += x[i];
	return (sum == s);
}

void Try(int i)
{
	for (int j = x[i - 1] + 1; j <= n - k + i; j++)
	{
		x[i] = j;
		if (i == k)
		{
			cnt += check();
		}
		else Try(i + 1);
	}
 } 

int main()
{
	while (1)
	{
		cin >> n >> k >> s;
		if (n == 0 && k == 0 && s == 0)
			return 0;
		else
		{
			cnt = 0;
			Try(1);
			cout << cnt << endl;
		}
	}
}

