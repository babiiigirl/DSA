#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

void solve(string s)
{
	stack<string> word;
	stringstream ss(s);
	string tmp;
	while (ss >> tmp)
	{
		word.push(tmp);
	}
	while (!word.empty())
	{
		cout << word.top() << " ";
		word.pop();
	}
	cout << endl;
}

int main()
{
	//IO();
	int t; cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		getline(cin, s);
		solve(s);
	}
}