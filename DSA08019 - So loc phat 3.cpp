#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

void solve(int n)
{
	queue<string> q1;
	queue<string> q2;
	q1.push("");
	while (!q1.empty())
	{
		string top = q1.front(); q1.pop();
		q2.push(top);
		if (top.length() == n)	continue;
		q1.push(top + "6");
		q1.push(top + "8");
	}
	q2.pop();
	stack<string> st;
	while (!q2.empty())
	{
		st.push(q2.front());
		q2.pop();
	}
	cout << st.size() << endl;
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