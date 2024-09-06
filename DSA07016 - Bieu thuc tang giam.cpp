#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		s.push_back('I');
		stack<int> st;
		st.push(-1);
		int max = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'I')
			{
				int cnt = i - st.top(); st.pop();
				st.push(i);
				max = max + cnt;
				for (int i = max; i > max - cnt; i--)
					cout << i;
			}
		 } 
		cout << endl;
	 } 
}

