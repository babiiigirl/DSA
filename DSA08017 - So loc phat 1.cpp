#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

void solve(int n)
{
	stack<string> st;
	queue<string> q;
	q.push("");
	while (!q.empty())
	{
		string top = q.front(); q.pop();
		st.push(top);
		if (top.length() == n) continue;
		q.push(top + "6");
		q.push(top + "8");
	}
	while (!st.empty())
	{
		cout << st.top() << " ";
		st.pop();
	}
}

int main()
{
	//IO();
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		solve(n);
		cout << endl;
	}
}