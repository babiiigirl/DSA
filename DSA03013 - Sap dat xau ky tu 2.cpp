#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int c[256];

int main()
{
	int t; cin >> t;
	while (t--) 
	{
		int d; cin >> d;
		string s; cin >> s;
		memset(c, 0, sizeof(c));
		for (int i = 0; i < s.length(); i++)
			c[s[i]]++;
		sort(c, c + 256);
		if(c[255] <= ceil((1.0 * s.length()) / (1.0 * d)))
			cout << 1 << endl;
		else
			cout << -1 << endl;
	}
}

