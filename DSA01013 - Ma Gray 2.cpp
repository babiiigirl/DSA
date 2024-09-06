#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string GraytoBinary(string g)
{
	string b = "";
	b += g[0];
	for (int i = 1; i < g.length(); i++)
	{
		if (g[i] == b[i - 1])
			b += '0';
		else b += '1';
	}
	return b;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string g; cin >> g;
		cout << GraytoBinary(g) << endl;
	}
}

