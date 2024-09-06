#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 0: A; 1: B

int n, k, a[1001], final = 0;

void ktao()
{
	for (int i = 1; i <= n; i++)
		a[i] = 0;
 } 
 
void sinh()
{
	int i = n;
	while (i > 0 && a[i] == 1)
	{
		a[i] = 0;
		--i;
	}
	if (i == 0)
		final = 1;
	else
	{
		a[i] = 1;
	}
}

bool check()
{
	int cnt = 0, ok = 0;
	for (int i = 1; i <= n; i++)
	{
		if(a[i] == 0)
		{
			++cnt;
			if (cnt == k)	ok = 1;
			else if (cnt > k)	ok = 0;	 
		} 
		else
			cnt = 0; 
	}
	if (ok)	return true;
	else	return false;
}

int main()
{
	cin >> n >> k;
	ktao();
	vector<string> v;
	while (!final)
	{
		if (check())
		{	
			string s = "";
			for (int i = 1; i <= n; i++)
			{
				if (a[i] == 0)
					s += 'A';
				else
					s += 'B';
			}
			v.push_back(s);
		}
		sinh();
	}
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
}

