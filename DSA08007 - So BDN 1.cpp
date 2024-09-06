#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

int init(string s)
{
	queue<string> q;
	int res = 0;
	q.push("1");
	while (!q.empty())
	{
		string top = q.front(); q.pop();
		++res;
		string x = top + "0";
		if (x.length() > s.length() || x.length() == s.length() && x > s)
			break;
		q.push(x);
		x = top + "1";
		if (x.length() > s.length() || x.length() == s.length() && x > s)
			break;
		q.push(x);
	}
	res += q.size();
	return res;
}

int main()
{
	IO();
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		cout << init(s) << endl;
	}
}