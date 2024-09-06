#include<bits/stdc++.h>
using namespace std ;
#define ll long long

int v , e , s , t;
int start;
vector<int> adj[1005] ;
int visited[1000] ;
int parent[1000] ;

void DFS (int v) {
    visited[v] = 1 ;
    for ( auto x : adj[v] ) {
        if ( !visited[x] ) {
            parent[x] = v ;
            DFS(x) ;
        }
    }
}

void DFSpath(int s , int t ) {
	vector<int> res ;
	memset ( visited , 0 , sizeof(visited)) ;
	DFS(s) ;
    if ( visited[t] == 0 ) {
        cout << -1 << endl;
        return ;
    }
    res.push_back(t) ;
    int tmp = parent[t] ;
    while ( tmp != s ) {
        res.push_back( tmp ) ;
        tmp = parent[tmp] ;
    }
    res.push_back(s) ;
    reverse( res.begin() , res.end()) ;
    for ( auto x : res) cout << x << " " ;
    	cout << endl;

}

void BFS ( int v ) {
   queue<int> q ;
   q.push(v) ;
    visited[v] = 1 ;
    while ( !q.empty() ) {
        int x = q.front() ;
        q.pop() ;
        for ( auto it : adj[x] ) {
            if (!visited[it]) {
                q.push(it) ;
                visited[it] = 1 ;
                parent[it] = x ;
            }
        }
    }

}

void BFSpath(int s, int t) {
	vector<int> res ;
	memset ( visited , 0 , sizeof(visited)) ;
	BFS(s) ;
    if ( visited[t] == 0 ) {
        cout << -1 << endl;
        return ;
    }
    res.push_back(t) ;
    int tmp = parent[t] ;
    while ( tmp != s ) {
        res.push_back( tmp ) ;
        tmp = parent[tmp] ;
    }
    res.push_back(s) ;
    reverse( res.begin() , res.end()) ;
    for ( auto x : res) cout << x << " " ;
    	cout << endl ;
}

int main()
{
     cin >> v >> e ;

    for ( int i = 1 ; i <= e ; i++ ) {
        int x , y ; cin >> x >> y ;
        adj[x].push_back(y) ;
        adj[y].push_back(x) ;
    }
    for ( int i = 2 ; i <= v ; i++ ) {
    	DFSpath( 1 , i ) ;
    	BFSpath( i , 1) ;
    }
    
            
return 0 ;
}
