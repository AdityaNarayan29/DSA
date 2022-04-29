// Adjecency matrix & Adjecency list
// Here undirected graph is taken to consideration
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;

// Way 1
  //  Matrix Code 
  int adj[n+1][m+1];
  //Taking edge input
  for (int i = 0; i < m; i++)
  {
    int u,v;
    cin >> u >> v ;
    adj[u][v] = 1;
    adj[v][u] = 1;
  }

// Way 2
  //List Code
  vector<int>adj[n+1];
  for (int i = 0; i < m; i++)
  {
    int u,v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  
// Way 3
  //List Code for weighted graph
  vector<pair<int,int>>adj[n+1];
  for (int i = 0; i < m; i++)
  {
    int u,v,wt;
    cin >> u >> v >> wt;
    adj[u].push_back({v, wt});
    adj[v].push_back({u, wt});
  }  
  return 0;
}