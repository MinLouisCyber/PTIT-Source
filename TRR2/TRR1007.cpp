#include<bits/stdc++.h>
using namespace std;

int main()
{
  ifstream fin("DT.INP");
  ofstream fout("DT.OUT");
  int t, n;
  fin >> t >> n;

  vector<vector<int>> adj(n);

  for(int i = 0; i < n; i++)
  {
    int k;
    fin >> k;
    adj[i].resize(k);
    for(int j = 0; j < k; j++)
    {
      fin >> adj[i][j];
      adj[i][j]--;
    }
  }

  if(t == 1)
  {
    for(int i = 0; i < n; i++)
    {
      fout << adj[i].size() << " ";
    }
  }
  else
  {
    fout << n << endl;
    vector<vector<int>> ans(n, vector<int> (n, 0));
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < adj[i].size(); j++)
      {
        int v = adj[i][j];
        ans[i][v] = 1;
        ans[v][i] = 1;
      }
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