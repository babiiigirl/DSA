#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, a[100];
string s;

void Try(int i)
{
	for (int j = a[i - 1] + 1; j <= n; j++)
	{
		a[i] = j;
		for (int k = 1; k <= i; k++)
			cout << s[a[k]];
		cout << " ";
		Try(i + 1);
	}
 } 
int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> s;
		s = "0" + s;
		Try(1);
		cout << endl;
	}
}

