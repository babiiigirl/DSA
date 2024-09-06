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
	while (t--)
	{
		int n; cin >> n;
		deque<int> q;
		while (n--)
		{
			int x; cin >> x;
			if (x == 1)
				cout << q.size() << endl;
			else if (x == 2)
			{
				if (q.empty())
					cout << "YES\n";
				else
					cout << "NO\n";
			}
			else if (x == 3)
			{
				int i; cin >> i;
				q.push_back(i);
			}
			else if (x == 4)
			{
				if (!q.empty())
					q.pop_front();
			}
			else if (x == 5)
			{
				if (!q.empty())
					cout << q.front() << endl;
				else
					cout << -1 << endl;
			}
			else 
			{
				if (!q.empty())
					cout << q.back() << endl;
				else
					cout << -1 << endl;
			}
		}
	}
}