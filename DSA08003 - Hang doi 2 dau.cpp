#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

int main()
{
	IO();
	int t; cin >> t;
	deque<int> q;
	while (t--)
	{
		string s; cin >> s;
		if (s == "PUSHFRONT")
		{
			int x; cin >> x;
			q.push_front(x);
		}
		if (s == "PUSHBACK")
		{
			int x; cin >> x;
			q.push_back(x);
		}
		if (s == "PRINTFRONT")
		{
			if (!q.empty())
				cout << q.front() << endl;
			else
				cout << "NONE\n";
		}
		if (s == "PRINTBACK")
		{
			if (!q.empty())
				cout << q.back() << endl;
			else
				cout << "NONE\n";
		}
		if (s == "POPFRONT" && !q.empty())
		{
			q.pop_front();
		}
		if (s == "POPBACK" && !q.empty())
		{
			q.pop_back();
		}
	}
}