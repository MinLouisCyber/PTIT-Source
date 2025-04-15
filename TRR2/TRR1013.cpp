#include<bits/stdc++.h>
using namespace std;

int main()
{
  ifstream fin("DT.INP");
  ofstream fout("DT.OUT");
  int t, n;
  fin >> t >> n;
  vector<vector<int>> adj(n, vector<int> (n));
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      fin >> adj[i][j];
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
    fout << n << endl;
    for(int i = 0; i < n; i++)
    {
      int dem = 0;
      for(int j = 0; j < n; j++)
      {
        if(adj[i][j])
          dem++;
      }
      fout << dem << " ";
      for(int j = 0; j < n; j++)
      {
        if(adj[i][j])
          fout << j + 1 << " ";
      }
      fout << endl;
    }
  }
}