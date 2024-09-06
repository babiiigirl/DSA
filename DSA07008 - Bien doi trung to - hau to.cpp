#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return -1;
}

string solve(string s) {
    stack<char> st;
    string result;
    for (char c : s) {
        if (isalpha(c)) {
            result += c;
        } 
        else if (c == '(') {
            st.push(c);
        } 
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        } 
        else {
            while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    return result;
}

int main() {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	
    int T;
    cin >> T;
    while (T--) {
        string exp;
        cin >> exp;
        cout << solve(exp) << endl;
    }
    return 0;
}
