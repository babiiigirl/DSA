#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void tower(int n, char a, char b, char c)
{
	if(n == 0)
		return;		
	tower(n - 1, a, c, b);
	cout << a << " -> " << c << endl;
	tower(n - 1, b, a, c);
}

int main()
{
	int n; cin >> n;
	char a = 'A', b = 'B', c = 'C';
	tower(n, a, b, c);
}

