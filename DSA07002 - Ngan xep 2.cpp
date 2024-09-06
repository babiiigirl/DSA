#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

int main()
{
	//IO();
	int t; cin >> t;
	stack<int> st;
	int n;
	while (t--)
	{
		string s; cin >> s;
		if (s == "PUSH")
		{
			cin >> n;
			st.push(n);
		}
		else if(st.size() && s == "POP")
			st.pop();
		else
		{
			if (st.empty())	cout << "NONE\n";
			else
			{
				cout << st.top() << endl;
			}
		}
	}
}