#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(string s)
{
	map<char, int> mp;
	int max = 0;
	for (int i = 0; i < s.length(); i++)
	{
		mp[s[i]]++;
		if (mp[s[i]] >= max)
			max = mp[s[i]];
	}
	if (s.size() - max >= max - 1)
		cout << "1\n";
	else
		cout << "-1\n";
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		solve(s);
	}
}

