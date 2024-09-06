#include <bits/stdc++.h>
using namespace std;

char x[100], c;
int used[100], n;

void in()
{
	for (int i = 1; i <= n; i++)
		cout << x[i];
}

bool check(char x[], int n)
{
	for (int i = 2; i <= n - 1; i++)
	{
		if (x[i] == 'A' && x[i - 1] != 'E' && x[i + 1] != 'E')
			return false;
		if (x[i] == 'E' && x[i - 1] != 'A' && x[i + 1] != 'A')
			return false;
	}
	return true;
 } 

void Try(int i)
{
	for (char j = 'A'; j <= c; j++)
	{
		if (used[j] == 0)
		{
			x[i] = j;
			used[j] = 1;
			if (i == n)
			{
				if(check(x, n))
				{
					in();
					cout << endl;
				}
			}
			else
				Try(i + 1);
			used[j] = 0;
		}
	}
}

int main()
{
	memset(used, 0, sizeof(used));
	cin >> c;
	n = c - 'A' + 1;
	Try(1);
}

