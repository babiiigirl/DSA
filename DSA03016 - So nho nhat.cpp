#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		stack<int> st;
		int s, d; cin >> s >> d;
		if (d == 1 && s == 0) cout << 0 << endl;
		if (s == 0 || d * 9 < s) cout << -1 << endl;
		else
		{
			--s;
			while (d--)
			{
				if (s >= 9)
				{
					st.push(9);
					s -= 9;
				}
				else if (s > 0)
				{
					st.push(s);
					s = 0;
				}
				else
					st.push(0);
			}
			cout << st.top() + 1;
			st.pop();
			while (!st.empty())
			{
				cout << st.top(); st.pop();
			}
		}
		cout << endl;
	}
}

