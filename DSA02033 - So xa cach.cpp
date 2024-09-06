#include <bits/stdc++.h>
using namespace std;

int x[100], n, used[100];

void in()
{
	for (int i = 1; i <= n; i++)
		cout << x[i];
 } 
 
bool check(int x[], int n)
{
	for (int i = 1; i <= n - 1; i++)
	{
		if (abs(x[i] - x[i + 1]) == 1)
			return false;
	}
	return true;
}
 
void Try(int i)
{
	for (int j = 1; j <= n; j++)
	{
		if (used[j] == 0)
		{
			x[i] = j;
			used[j] = 1;
			if (i == n)
			{
				if (check(x, n))
				{
					in();
					cout << endl;
				}
			}
			else Try(i + 1);
			used[j] = 0;
		}
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		memset(used, 0, sizeof(used));
		cin >> n;
		Try(1);
		cout << " "; 
	}	
}

