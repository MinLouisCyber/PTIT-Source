#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t, n;
  cin >> t >> n;
  vector<vector<int>> adj(n);

  int dem = 0;
  for(int i = 0; i < n; i++)
  {
    int k;
    cin >> k;
    dem += k;
    adj[i].resize(k);

    for(int j = 0; j < k; j++)
    {
      cin >> adj[i][j];
      adj[i][j]--;
    }
  }

  if(t == 1)
  {
    for(int i = 0; i < n; i++)
    {
      cout << adj[i].size() << " ";
    }
  }
  else
  {
    cout << n << " " << dem / 2 << endl;
    int res = 0;
    vector<vector<int>> ans(n, vector<int> (dem / 2, 0));

    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < adj[i].size(); j++)
      {
        int v = adj[i][j];
        if(i < v)
        {
          ans[i][res] = 1;
          ans[v][res] = 1;
          res++;
        }
      }
    }

    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < dem / 2; j++)
      {
        cout << ans[i][j] << " ";
      }
      cout << endl;
    }
  }
}