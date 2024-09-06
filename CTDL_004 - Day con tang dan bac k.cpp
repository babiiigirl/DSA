#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k, a[1001], x[1001], cnt = 0; 

bool check()
{
	for (int i = 1; i <= k - 1; i++)
	{
		if (x[i] > x[i + 1])
			return false;
	}
	return true;
}

//void in()
//{
//	for (int i = 1; i <= k; i++)
//		cout << x[i] << " ";
//	cout << endl;
//}

void Try(int i, int pos)
{
	for (int j = pos; j <= n; j++)
	{
		x[i] = a[j];
		if (i == k && check())
		{
			//in();
			++cnt;
		}
		else Try(i + 1, j + 1);
	}
}

int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	Try(1, 1);
	cout << cnt << endl;
}

