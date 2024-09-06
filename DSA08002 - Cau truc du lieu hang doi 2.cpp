#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

int main()
{
	//IO();
	int t; cin >> t;
	queue<int> q;
	while (t--)
	{
		string s; cin >> s;
		if (s == "PUSH")
		{
			int x; cin >> x;
			q.push(x);
		}
		if (s == "PRINTFRONT")
		{
			if (!q.empty())
				cout << q.front() << endl;
			else
				cout << "NONE\n";
		}
		if (s == "POP" && !q.empty())
		{
			q.pop();
		}
	}
}