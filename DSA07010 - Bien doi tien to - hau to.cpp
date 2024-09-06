#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

string solve(string s)
{
	stack<string> st;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		if (isalpha(s[i]))
			st.push(string(1, s[i]));
		else
		{
			string x = st.top(); st.pop();
			string y = st.top(); st.pop();
			string res = x + y + s[i];
			st.push(res);
		}
	}
	return st.top();
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