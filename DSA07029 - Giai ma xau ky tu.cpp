#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

string solve(string s)
{
	stack<char> st;
	string res = "";
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ']')
		{
			string tmp = "";
			while (!st.empty() && st.top() != '[')
			{
				tmp = st.top() + tmp;
				st.pop();
			}
			if (!st.empty()) st.pop();
			string num = "";
			while (!st.empty() && isdigit(st.top()))
			{
				num = st.top() + num;
				st.pop();
			}
			if (num == "")
				num = "1";
			int d = stoi(num);
			string ans = "";
			for (int i = 1; i <= d; i++)
				ans += tmp;
			for (char x : ans)
				st.push(x);
		}
		else
		{
			st.push(s[i]);
		}
	}
	while (!st.empty())
	{
		res = st.top() + res;
		st.pop();
	}
	return res;
}

int main()
{
	IO();
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		cout << solve(s) << endl;
	}
}