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
	for (int i = s.length() - 1; i >= 0; i--)
	{
		if (isdigit(s[i])) st.push(s[i] - '0');
		else
		{
			int x = st.top(); st.pop();
			int y = st.top(); st.pop();
			switch(s[i])
			{
				case '+' : 
				{
					st.push(x + y);
					break;
				}	
				case '-' : 
				{
					st.push(x - y);
					break;
				}
				case '*' : 
				{
					st.push(x * y);
					break;
				}
				default: st.push(x / y);
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