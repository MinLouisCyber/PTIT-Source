#include<bits/stdc++.h>
using namespace std;

int main()
{
  ifstream fin("DT.INP");
  ofstream fout("DT.OUT");
  int t, n;
  fin >> t >> n;
  vector<vector<int>> adj(n, vector<int> (n));
  int dem = 0;
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      fin >> adj[i][j];
      if(adj[i][j])
       dem++;
    }
  }

  if(t == 1)
  {
    for(int i = 0; i < n; i++)
    {
      int degc = 0, degt = 0;
      for(int j = 0; j < n; j++)
      {
        if(adj[i][j] == 1)
         degc++;
        if(adj[j][i] == 1)
         degt++;
      }
      fout << degt << " " << degc << endl;
    }
  }
  else
  {
    fout << n << " " << dem << endl;
    int res = 0;
    vector<vector<int>> ans(n, vector<int> (dem, 0));
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
      {
        if(adj[i][j])
        {
          ans[i][res] = 1;
          ans[j][res] = -1;
          res++;
        }
      }
    }
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < dem; j++)
      {
        fout << ans[i][j] << " ";
      }
      fout << endl;
    }
  }
}