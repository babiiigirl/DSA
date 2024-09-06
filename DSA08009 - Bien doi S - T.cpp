#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

int solve(int s, int t)
{
	queue<pair<int, int>> q;
	set<int> se;
	se.insert(s);
	q.push({s, 0});
	while (!q.empty())
	{
		pair<int, int> top = q.front(); q.pop();
		int first = top.first, second = top.second;
		if (first == t) return second;
		if (first * 2 == t || first - 1 == t) return second + 1;
		if (se.find(first * 2) == se.end() && first < t)
		{
			q.push({first * 2, second + 1});
			se.insert(first * 2);
		}
		if (se.find(first - 1) == se.end() && first > 1)
		{
			q.push({first - 1, second + 1});
			se.insert(first - 1);
		}
	}
}

int main()
{
	//IO();
	int t; cin >> t;
	while (t--)
	{
		int s, t; cin >> s >> t;
		cout << solve(s, t) << endl;
	}
}