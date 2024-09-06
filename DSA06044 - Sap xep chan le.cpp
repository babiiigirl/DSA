#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> odd, even;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if ((i + 1) % 2 == 1) {
            odd.push_back(a[i]);
        } else {
            even.push_back(a[i]);
        }
    }
    
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end(), greater<int>());
    
    int oddIndex = 0, evenIndex = 0;
    for (int i = 0; i < n; ++i) {
        if ((i + 1) % 2 == 1) {
            cout << odd[oddIndex++] << " ";
        } else {
            cout << even[evenIndex++] << " ";
        }
    }
    cout << endl;
    
    return 0;
}
