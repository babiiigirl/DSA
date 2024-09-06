#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string BinarytoGray(string b)
{
	string g = "";
	g += b[0];
	for (int i = 1; i < b.length(); i++)
	{
		if (b[i] != b[i - 1])
			g += "1";
		else
			g += "0";
	 } 
	return g;
 } 

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string b; cin >> b;
		cout << BinarytoGray(b) << endl;
	}
}

