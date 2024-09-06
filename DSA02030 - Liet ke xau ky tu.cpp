#include <bits/stdc++.h>
using namespace std;

int k;
char c, x[100]; 

void in()
{
	for (int i = 1; i <= k; i++)
		cout << x[i];
}

void Try(int i, char start)
{
	for (char j = start; j <= c; j++)
	{
		x[i] = j;
		if (i == k)
		{
			in();
			cout << endl;
		}
		else
			Try(i + 1, j);
	}
}

int main()
{
	cin >> c >> k;
	//cin >> n >> k;
	Try(1, 'A');
}

