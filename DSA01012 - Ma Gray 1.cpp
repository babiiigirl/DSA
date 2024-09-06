#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<string> Gray(int n)
{
	if (n == 0)
		return {"0"};
	if (n == 1)
		return {"0", "1"};
	vector<string> ans = Gray(n - 1);
	vector<string> maGray;
	for (int i = 0; i < ans.size(); i++)
	{
		maGray.push_back("0" + ans[i]);
	}
	for (int i = ans.size() - 1; i >= 0; i--)
	{
		maGray.push_back("1" + ans[i]);
	}
	return maGray;
 } 

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<string> maGray = Gray(n);
		for (auto x : maGray)
			cout << x << " ";
		cout << endl;
	}
}

