#include<bits/stdc++.h>
using namespace std;

int main()
{
  ifstream fin("DT.INP");
  ofstream fout("DT.OUT");
  int t, n;
  fin >> t >> n;

  int dem = 0;
  vector<vector<int>> adj(n);

  for(int i = 0; i < n; i++)
  {
    int k;
    fin >> k;
    dem += k;
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
    fout << n << " " << dem / 2 << endl;
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < adj[i].size(); j++)
      {
        if(i < adj[i][j])
          fout << i + 1 << " " << adj[i][j] + 1 << endl;
      }
    }
  }
}