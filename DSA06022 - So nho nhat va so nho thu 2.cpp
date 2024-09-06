#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }

        if (s.size() > 1)
        {
            auto it = s.begin();
            cout << *it << " " << *(++it) << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
