#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
bool check(string s, int n)
{
	int x = 0;
    for (int i = 0; i < s.length(); ++i) {
        x = (x * 10 + (s[i] - '0')) % n;
    }
    return x == 0;
}

void init()
{
	int n; cin >> n;
	queue<string> q;
	q.push("1");
	while (true)
	{
		string top = q.front(); q.pop();
		if (check(top, n))
		{
			cout << top << endl;
			return;
		}
		string x = top + "0"; q.push(x);
		string y = top + "1"; q.push(y);
	}
}

int main()
{
	IO();
	int t; cin >> t;
	while (t--)
	{
		init();
	}
}