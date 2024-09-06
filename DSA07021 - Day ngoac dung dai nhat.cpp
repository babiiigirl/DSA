#include <bits/stdc++.h>
using namespace std;

void IO()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

int find(string s) {
    stack<int> st;
    st.push(-1); // Đánh dấu điểm bắt đầu
    int maxLength = 0;
        for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            st.pop();
            if (st.empty()) {
                st.push(i); // đánh dấu vị trí bắt đầu của chuỗi tiềm năng 
            } 
            else
                maxLength = max(maxLength, i - st.top());
        }
    }
    return maxLength;
}

int main()
{
	//IO();
	int t; cin >> t;
	while (t--)
	{
		string s;
        cin >> s;
        cout << find(s) << endl;
    }
}