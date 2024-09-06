#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

vector<string> res;
void init()
{
	queue<string> q;
	q.push("9");
	res.push_back("9");
	while (res.size() < 10000)
	{
		string top = q.front(); q.pop();
		string x = top + "0"; q.push(x);
		string y = top + "9"; q.push(y);
		res.push_back(x);
		res.push_back(y);
	}
}

int main()
{
	//IO();
	init();
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		for (int i = 0; i < res.size(); i++)
		{
			if (stoi(res[i]) % n == 0)
			{
				cout << res[i] << endl;
				break;
			}
		}
	}
}