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
    vector<int> degc(n, 0);
    vector<int> degt(n, 0);
    for(int i = 0; i < m; i++)
    {
       int u = adj[i].first;
       int v = adj[i].second;
       degc[u]++;
       degt[v]++;
    }

    for(int i = 0; i < n; i++)
    {
      fout << degt[i] << " " << degc[i] << endl;
    }
  }
  else
  {
    vector<vector<int>> ans(n, vector<int> (m, 0));
    int res = 0;
    for(int i = 0; i < m; i++)
    {
      int u = adj[i].first;
      int v = adj[i].second;
      ans[u][res] = 1;
      ans[v][res] = -1;
      res++;
    }
    fout << n << " " << m << endl;
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