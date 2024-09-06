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
	stack<int> a;
	string s;
	int n;
	while(cin >> s)
	{
		if (s == "pop" && a.size())
			a.pop();
		else if (s == "push")
		{
			cin >> n;
			a.push(n);
		}
		else
		{
			if (a.empty()) cout << "empty" << endl;
			else
			{
				stack<int> tmp;
				while (a.size())
				{
					tmp.push(a.top());
					a.pop();
				}
				while (tmp.size())
				{
					cout << tmp.top() << " ";
					a.push(tmp.top());
					tmp.pop();
				}
			}
			cout << endl;
		}
	}
}