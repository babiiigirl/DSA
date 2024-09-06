#include <bits/stdc++.h>
using namespace std;

int test(int n, char a, char b)
{
	string s = to_string(n);
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == a)
			s[i] = b;
	}
	return stoi(s);
}
int main()
{
	int a, b; cin >> a >> b;
	cout << test(a, '6', '5') + test(b, '6', '5') << " " << test(a, '5', '6') + test(b, '5', '6');
}
