#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string s = "2000";
char c[2] = {'0', '2'};
vector<string> d, m, y;

void Try(int i)
{
	for (int j = 0; j <= 1; j++)
	{
		s[i] = c[j];
		if (i == 3)
			y.push_back(s);
		else Try(i + 1);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	d.push_back("02");
	d.push_back("20");
	d.push_back("22");
	Try(1);
	for (auto i : d)
	{
		for (auto j : y)
			cout << i << "/02/" << j << endl;
	}
}

