 #include <bits/stdc++.h>
 using namespace std;
 
 void IO()
 {
 	freopen("input.txt", "r", stdin);
 	freopen("output.txt", "w", stdout);
 }

 int n, m, check;
 set<int> ke[1005];
 bool visited[1005];
 int HC[1005];

 void input()
 {
 	cin >> n >> m;
 	for (int i = 0; i < m; i++)
 	{
 		int x, y; cin >> x >> y;
 		ke[x].insert(y);
 		ke[y].insert(x);
 	}
 	memset(visited, false, sizeof(visited));
 	check = 0;
 }

void hamilton(int pos, int u)
{
	visited[u] = true;
	HC[pos] = u;
	if (pos == n) //da tham het cac dinh
	{
		check = 1;
		// in ra chu trinh
		// for (int k = 1; k <= pos; k++)
		// 	cout << HC[k] << " ";
		// cout << endl;
		return;
	}
	else
	{
		for (int v : ke[u])
		{
			if(!visited[v])
			{
				hamilton(pos + 1, v);
				//visited[v] = false;
				if (check)
					return;
			}	
		}
	}
	visited[u] = false;
}
 
 int main()
 {
 	//IO();
 	int t; cin >> t;
 	while (t--)
 	{
 		input();
	 	for (int i = 1; i <= n; i++)
	 	{
	 		hamilton(1, i);
	 		if (check) break;
	 	}
	 	cout << check << endl;
	 	for (int i = 0; i < 1005; i++)
	 		ke[i].clear();
 	}
 }