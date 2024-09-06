#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(int n)
{
    queue<pair<int, int>> q;
    set<int> se;
    se.insert(n);
    q.push({n, 0});
    while (q.front().first != 1)
    {
        pair<int, int> top = q.front(); q.pop();
        int first = top.first, second = top.second;
        int sqr = sqrt(first);
        for (int i = 2; i <= sqr; i++)
        {
            if (first % i) continue;
            int maxn = first/i;
            if (se.find(maxn) == se.end()) 
            {
                q.push({maxn, second + 1});
                se.insert(maxn);
            }
                
        }
        if (se.find(first - 1) == se.end())
        {
            q.push({first - 1, second + 1});
            se.insert(first - 1);
        }
    }
    cout << q.front().second << endl;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        solve(n);
    }
}

