#include<bits/stdc++.h>
using namespace std;

void dfs(int u, vector<vector<int>>& adj, vector<bool>& visited)
{
  visited[u] = true;
  for(int v = 0; v < adj.size(); v++)
  {
    if(adj[u][v] && !visited[v])
    {
      dfs(v, adj, visited);
    }
  }
}

void dinhtru(vector<vector<int>>& adj, vector<bool>& visited, ofstream& fout)
{
  int tplt = 0;
  vector<int> ans;
  int n = adj.size();
  for(int i = 0; i < n; i++)
  {
    if(!visited[i])
    {
      tplt++;
      dfs(i, adj, visited);
    }
  }

  for(int i = 0; i < n; i++)
  {
    int dem = 0;
    visited.assign(n, false);
    visited[i] = true;

    for(int j = 0; j < n; j++)
    {
        if(!visited[j])
      {
        dem++;
        dfs(j, adj, visited);
      }
    }
    if(dem > tplt)
    {
      ans.push_back(i + 1);
    }
  }
  sort(ans.begin(), ans.end());
  fout << ans.size() << endl;
  for(auto x : ans) fout << x << " ";
}
int main()
{
  ifstream fin("TK.INP");
  ofstream fout("TK.OUT");
  int n;
  fin >> n;
  vector<vector<int>> adj(n, vector<int> (n));
  vector<bool> visited(n, false);
  for(int i = 0 ; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      fin >> adj[i][j];
    }
  }

  dinhtru(adj, visited, fout);
}