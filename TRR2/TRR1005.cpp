#include<bits/stdc++.h>
using namespace std;

int main()
{
  ifstream fin("DT.in");
  ofstream fout("DT.out");
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
      cout << degree[i] << " ";
    }
  }
  else
  {
    fout << n << endl;
    vector<vector<int>> tmp(n, vector<int> (n, 0));
    for(int i = 0; i < m; i++)
    {
      int u = adj[i].first;
      int v = adj[i].second;
      tmp[u][v] = 1;
      tmp[v][u] = 1;
    }
    for(int i = 0; i < n; i++)
    {
      int dem = 0;
      for(int j = 0; j < n; j++)
      {
        if(tmp[i][j]) dem++;
      }
      fout << dem << " ";
      for(int j = 0; j < n; j++)
      {
        if(tmp[i][j]) cout << j + 1<< " ";
      }
      fout << endl;
    }
  }
}