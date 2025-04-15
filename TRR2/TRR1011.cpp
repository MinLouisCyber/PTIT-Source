#include<bits/stdc++.h>
using namespace std;

int main()
{
  ifstream fin("DT.INP");
  ofstream fout("DT.OUT");
  int t, n, m;
  fin >> t >> n >> m;
  vector<pair<int, int>> adj(m);
  vector<vector<int>> ans(n, vector<int> (n, 10000));
  for(int i = 0; i < m; i++)
  {
    int u, v, w;
    fin >> u >> v >> w;
    ans[u - 1][v - 1] = w;
    ans[v - 1][u - 1] = w;
    adj[i] = {u - 1, v - 1};
  }

  if(t == 1)
  {
    vector<int> tmp(n, 0);
    for(int i = 0; i < m; i++)
    {
      int u = adj[i].first;
      int v = adj[i].second;

      tmp[u]++;
      tmp[v]++;
    }
    for(int i = 0; i < n; i++)
    {
      fout << tmp[i] << " ";
    }
  }
  else
  {
    fout << n << endl;
    for(int i = 0; i < n; i++)
    {
      ans[i][i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
      {
       fout << ans[i][j] << " ";
      }
      fout << endl;
    }
  }
}