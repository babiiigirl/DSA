#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}


bool check(string s)
{
    stack<char> st; // Sử dụng char thay vì int
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            st.push(s[i]); // Đẩy ký tự vào ngăn xếp
        else
        {
            if (st.empty()) return false;
            if (s[i] == ')' && st.top() != '(') return false;
            else if (s[i] == ']' && st.top() != '[') return false;
            else if (s[i] == '}' && st.top() != '{') return false;
            st.pop(); // Loại bỏ ký tự khớp từ ngăn xếp
        }
    }
    return st.empty(); // Kiểm tra ngăn xếp rỗng
}

int main()
{
	//IO();
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		if (check(s))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}