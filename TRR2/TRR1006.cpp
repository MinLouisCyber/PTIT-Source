#include<bits/stdc++.h>
using namespace std;

int main()
{
  ifstream fin("DT.INP");
  ofstream fout("DT.OUT");
  int t, n, m;
  fin >> t >> n >> m;
  vector<pair<int, int>> adj(m);
  for(int i = 0; i < m; i++)
  {
    int x, y;
    fin >> x >> y;
    adj[i] = {x - 1, y - 1};
  }

  if(t == 1)
  {
    vector<int> degree(n, 0);
    for(int i = 0; i < m; i++)
    {
      int u = adj[i].first;
      int v = adj[i].second;
      degree[u]++;
      degree[v]++;
    }

    for(int i = 0; i < n; i++)
    {
      fout << degree[i] << " ";
    }
  }
  else
  {
    fout << n << " " << m << endl;
    vector<vector<int>> ans(n, vector<int> (m, 0));
    int dem = 0;
    for(int i = 0; i < m; i++)
    {
      int u = adj[i].first;
      int v = adj[i].second;
      ans[u][dem] = 1;
      ans[v][dem] = 1;
      dem++;
    }

    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < m; j++)
      {
        fout << ans[i][j] << " ";
      }
      fout << endl;
    }
  }
}