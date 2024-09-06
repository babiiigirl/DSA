#include <bits/stdc++.h>
using namespace std;

string s;
int n, a[100], used[100]; 

void in()
{
	for (int i = 1; i <= n; i++)
		cout << s[a[i] - 1];
	cout << " ";
}
void Try(int i)
{
	for (int j = 1; j <= n; j++)
	{
		if (used[j] == 0)
		{
			a[i] = j;
			used[j] = 1;
			if (i == n)
			{
				in();
			}
			else
				Try(i + 1);
			used[j] = 0;
		}
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> s;
		n = s.length();
		memset(used, 0, sizeof(used));
		Try(1);
		cout << endl;
	}
}

