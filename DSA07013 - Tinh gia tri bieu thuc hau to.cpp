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
	for (int i = 0; i < s.length(); i++)
	{
		if (isdigit(s[i])) st.push(s[i] - '0');
		else
		{
			int x = st.top(); st.pop();
			int y = st.top(); st.pop();
			// if (s[i] == '+') st.push(x + y);
			// else if (s[i] == '-') st.push(y - x);
			// else if (s[i] == '*') st.push(x * y);
			// else st.push(y / x);
			switch(s[i])
			{
				case '+' : 
				{
					st.push(x + y);
					break;
				}	
				case '-' : 
				{
					st.push(y - x);
					break;
				}
				case '*' : 
				{
					st.push(x * y);
					break;
				}
				default: st.push(y / x);
			}

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