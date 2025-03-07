#include<bits/stdc++.h>
using namespace std;

int a[10][10];
int cot[10] = {}, cc[10] = {}, cp[10] = {};
int res;

void Try(int i, int val)
{
  for(int j = 1; j <= 8; j++)
  {
    if(!cot[j] && !cc[i + j - 1] && !cp[i - j + 8])
    {
      cot[j] = cc[i + j - 1] = cp[i - j + 8] = 1;
      if(i == 8)
      {
        res = max(res, val + a[i][j]);
      }
      else
      {
        Try(i + 1, val + a[i][j]);
      }
      cot[j] = cc[i + j - 1] = cp[i - j + 8] = 0;
    }
  }
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    res = 0;
    for(int i = 1; i <= 8; i++)
    {
      for(int j = 1; j <= 8; j++)
      {
        cin >> a[i][j];
      }
    }
    Try(1, 0);
    cout << res << endl;
  }
}