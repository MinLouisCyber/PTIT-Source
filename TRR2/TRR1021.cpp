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
        if(adj[i][j] > 0 && adj[i][j] <= 50)
        {
          degc++;
        }
      }
      for(int j = 0; j < n; j++)
      {
        if(adj[j][i] > 0 && adj[j][i] <= 50)
        {
          degt++;
        }
      }
      fout << degt << " " << degc << endl;
    }
  }
  else
  {
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
      {
        if(adj[i][j] > 0 && adj[i][j] <= 50)
        {
          dem++;
        }
      }
    }
    fout << n << " " << dem << endl;
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
      {
        if(adj[i][j] > 0 && adj[i][j] <= 50)
        {
          fout << i + 1 << " " << j + 1 << " " << adj[i][j] << endl;
        }
      }
    }

  }
}