#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int a[n];
	for (int &x : a)
		cin >> x;
	for (int i = 0; i < n; i++)
	{
		int pos = i - 1, value = a[i];
		while (pos >= 0 && value < a[pos])
		{
			a[pos + 1] = a[pos];
			--pos;
		}
		a[pos + 1] = value;
		cout << "Buoc " << i << ": ";
		for (int j = 0; j <= i; j++)
			cout << a[j] << " ";
		cout << endl; 
	}
 } 
