#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

bool check(string s)
{
	stack<int> st;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(') st.push(i);
		else if (s[i] == ')')
		{
			if (st.empty()) return false;
			int j = st.top();
			if (i - j == 2) return false;
			else if (s[j + 1] == '(' && s[i - 1] == ')') return false; 
			else st.pop();
		}
	}
	return st.empty();
}

int main()
{
	//IO();
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		if (check(s))
			cout << "No\n";
		else
			cout << "Yes\n";
	}
}