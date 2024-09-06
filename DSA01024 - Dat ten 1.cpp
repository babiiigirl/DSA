#include <bits/stdc++.h>
using namespace std;

int x[100], n, k;
vector<string> v;

//void in()
//{
//	for (int i = 1; i <= v.size(); i++)
//		cout << v[x[i] - 1] << " ";
//	cout << endl;
//}

void Try(int i)
{
	for (int j = x[i - 1] + 1; j <= n - k + i; j++)
	{
		x[i] = j;
		if (i == k)
		{
			for (int i = 1; i <= k; i++)
				cout << v[x[i] - 1] << " ";
			cout << endl;
		}
		else Try(i + 1);
	}
}

int main()
{
	cin >> n >> k;
	set<string> st;
	for (int i = 0; i < n; i++)
	{
		string s; cin >> s;
		st.insert(s);
	}
	for (auto x : st)
		v.push_back(x);
	n = v.size();
	Try(1);
}

