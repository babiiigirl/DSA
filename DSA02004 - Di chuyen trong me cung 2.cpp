#include <bits/stdc++.h>
using namespace std;

int n, a[100][100], check;
string s = "";

void Try(int i, int j)
{
	if (i == n && j == n)
	{
		check = 1;
		cout << s << " ";
	}
	if (i + 1 <= n && a[i + 1][j] == 1)
	{
		s += "D"; 
		a[i + 1][j] = 0;
		Try(i + 1, j);
		s.pop_back();
		a[i + 1][j] = 1;
	}
	if (j - 1 >= 1 && a[i][j - 1] == 1)
	{
		s += "L";
		a[i][j - 1] = 0;
		Try(i, j - 1);
		s.pop_back();
		a[i][j - 1] = 1;
	}
	if (j + 1 <= n && a[i][j + 1] == 1)
	{
		s += "R";
		a[i][j + 1] = 0;
		Try(i, j + 1);
		s.pop_back();
		a[i][j + 1] = 1;
	}
	if (i - 1 >= 1 && a[i - 1][j] == 1)
	{
		s += "U"; 
		a[i - 1][j] = 0;
		Try(i - 1, j);
		s.pop_back();
		a[i - 1][j] = 1;
	}
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
				cin >> a[i][j];
		}
		check = 0;
		if (a[1][1] && a[n][n])
		{
			a[1][1] = 0;
			Try(1, 1);
		}
		if (!check)
			cout << -1;
		cout << endl;
	}
}
