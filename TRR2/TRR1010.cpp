#include<bits/stdc++.h>
using namespace std;

int main()
{
  ifstream fin("DT.INP");
  ofstream fout("DT.OUT");
  int t, n;
  fin >> t >> n;
  vector<vector<int>> adj(n, vector<int>(n));
  int ans = 0;
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      fin >> adj[i][j];
      if(adj[i][j] > 0 && adj[i][j] <= 50){
        ans++;
      }
    }
  }

  if(t == 1)
  {
    for(int i = 0; i < n; i++)
    {
      int dem = 0;
      for(int j = 0; j < n; j++)
      {
        if(adj[i][j] > 0 && adj[i][j] <= 50)
         dem++;
      }
      fout << dem << " ";
    }
  }
  else
  {
    fout << n << " " << ans / 2 << endl;
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
      {
        if(adj[i][j] > 0 && adj[i][j] <= 50 && i < j)
         fout << i + 1 << " " << j + 1 << " " << adj[i][j] << endl;
      }
    }
  }

}