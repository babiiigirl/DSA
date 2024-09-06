#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

int solve(string s)
{
	stack<int> st;
	int cnt = 0;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == '(') st.push(i);
		else
		{
			if (st.empty())
			{
				++cnt;
				st.push(i);
			}
			else st.pop();
		}
	}
	cnt += st.size()/2;
	return cnt;
}

int main()
{
	//IO();
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		cout << solve(s) << endl;
	}
}