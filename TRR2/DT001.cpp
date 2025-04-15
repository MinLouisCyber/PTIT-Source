#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t, n;
  cin >> t >> n;
  vector<vector<int>> adj(n, vector<int>(n));
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      cin >> adj[i][j];
    }
  }
  if(t == 1)
  {
    for(int i = 0; i < n; i++)
    {
      int res = 0;
      for(int j = 0; j < n; j++)
      {
        if(adj[i][j])
         res++;
      }
      cout << res << " ";
    }
  }
  else
  {
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
      {
        if(adj[i][j]) dem++;
      }
    }
    cout << n << " " << dem / 2 << endl;

    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
      {
        if(adj[i][j]) adj[j][i] = 0;
      }
    }
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
      {
        if(adj[i][j]) cout << i + 1 << " " << j + 1 << endl;
      }
    }
  }
}