#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, a[1001][1001];

int main()
{
	cin >> n;
	cin.ignore();
	for (int i = 1; i <= n; i++)
	{
		string s, num;
		getline(cin, s);
		stringstream ss(s);
		while (ss >> num)
		{
			a[i][stoi(num)] = 1;
		}
	} 
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
