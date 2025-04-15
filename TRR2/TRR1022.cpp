#include<bits/stdc++.h>
using namespace std;

int main()
{
  ifstream fin("DT.INP");
  ofstream fout("DT.OUT");
  int t, n, m;
  fin >> t >> n >> m;
  vector<vector<int>> ans(n, vector<int> (n, 10000));
  vector<pair<int, int>> p(m);
  for(int i = 0; i < n; i++)
  {
    ans[i][i] = 0;
  }
  for(int i = 0; i < m; i++)
  {
    int x, y, z;
    fin >> x >> y >> z;
    p[i] = {x - 1, y - 1};
    ans[x - 1][y - 1] = z;
  }
  if(t == 1)
  {
    vector<int> degc(n);
    vector<int> degt(n);
    for(int i = 0; i < m; i++)
    {
      int u = p[i].first;
      int v = p[i].second;
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
      for(int j = 0; j < n; j++)
      {
        fout << ans[i][j] << " ";
      }
      fout << endl;
    }
  }
}