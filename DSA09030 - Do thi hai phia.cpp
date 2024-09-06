#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int k, n, m, check = 0;
vector<int> ke[1001];
bool visited[1001]; 
int par[1001];

void inp()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
 } 
 
void dfs(int u)
{
    visited[u] = true;
    for (int v : ke[u])
    {
        if (!visited[v])
        {
            par[v] = u;
            dfs(v);
        }
        else if (v != par[u]) check = 1;
    }
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		inp(); check = 0;
	    for (int i = 1; i <= n; i++)
	    {
	        if (!visited[i])
	        dfs(i);
	    }
	    if (check) cout << "NO\n";
	    else cout << "YES\n";
	    for (int i = 0; i < 1001; i++)
	    	ke[i].clear();
	}  
}

