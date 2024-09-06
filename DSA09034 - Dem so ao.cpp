#include <bits/stdc++.h>
using namespace std;
using ll = long long;

char a[1001][1001];
int n, m;

int d1[8] = {-1, 1, 0, 0, -1, 1, -1, 1};
int d2[8] = {0, 0, -1, 1, -1, 1, 1, -1};

void loang(int i, int j)
{
    a[i][j] = '.';
    for (int k = 0; k < 8; k++)
    {
        int x = i + d1[k], y = j + d2[k];
        if (a[x][y] == 'W' && x >= 0 && x < n && y >= 0 && y < m)
            loang(x, y);
    }
}

int main()
{
    int cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'W')
            {
                ++cnt;
                loang(i, j);
            }
        }
    }
    cout << cnt;
}

