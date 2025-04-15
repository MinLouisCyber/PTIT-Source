#include<bits/stdc++.h>
using namespace std;

int main()
{
  ifstream fin("DT.INP");
  ofstream fout("DT.OUT");
  int t, n, m;
  fin >> t >> n >> m;
  vector<pair<int, int>> adj(m);
  vector<vector<int>> ans(n, vector<int> (n, 0));
  for(int i = 0; i < m; i++)
  {
    int x, y;
    fin >> x >> y;
    ans[x - 1][y - 1] = 1;
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
    fout << n << endl;
    for(int i = 0; i < n; i++)
    {
      int dem = 0;
      for(int j = 0; j < n; j++)
      {
        if(ans[i][j])
        {
          dem++;
        }
      }
      fout << dem << " ";
      for(int j = 0; j < n; j++)
      {
        if(ans[i][j])
        {
          fout << j + 1 << " ";
        }
      }
      fout << endl;
    }
  }
}