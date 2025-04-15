#include<bits/stdc++.h>
using namespace std;

int main()
{
  ifstream fin("DT.INP");
  ofstream fout("DT.OUT");
  int t, n;
  fin >> t >> n;
  vector<vector<int>> tmp(n);
  int dem = 0;
  for(int i = 0; i < n; i++)
  {
    int k;
    fin >> k;
    dem += k;
    tmp[i].resize(k);
    for(int j = 0; j < k; j++)
    {
      fin >> tmp[i][j];
    }
  }

  vector<vector<int>> ans(n, vector<int> (n, 0));
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < tmp[i].size(); j++)
    {
      int u = tmp[i][j];
      ans[i][u - 1] = 1;
    }
  }

  if(t == 2)
  {
    fout << n  << " " << dem << endl;
    vector<vector<int>> minh(n, vector<int> (dem, 0));
    int res = 0;
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
      {
        if(ans[i][j]){
          minh[i][res] = 1;
          minh[j][res] = -1;
          res++;
        }
      }
    }
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < dem; j++)
      {
        fout << minh[i][j] << " ";
      }
      fout << endl;
    }
  }
  else
  {
    for(int i = 0; i < n; i++)
    {
      int h = 0, c = 0;
      for(int j = 0; j < n; j++)
      {
        if(ans[i][j]) h++;
        if(ans[j][i]) c++;
      }
      fout << c << " " << h << endl;
    }
  }
}