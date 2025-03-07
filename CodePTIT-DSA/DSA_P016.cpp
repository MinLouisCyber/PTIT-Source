#include<bits/stdc++.h>
using namespace std;

int a[10][10];
int vs[10] = {}, cc[10] = {}, cp[10] = {};
int res;

void Try(int i, int val)
{
  for(int j = 1; j <= 8; j++)
  {
    if(!vs[j] && !cc[i + j - 1] && !cp[i - j + 8])
    {
      vs[j] = cc[i + j - 1] = cp[i - j + 8] = 1;
      if(i == 8)
      {
        res = max(res, val + a[i][j]);
      }
      else
      {
        Try(i + 1, val + a[i][j]);
      }
      vs[j] = cc[i + j - 1] = cp[i - j + 8] = 0;
    }
  }
}
int main()
{
	int t;
	cin >> t;
	for(int k = 1; k <= t; k++)
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
    cout << "Test " << k << ": " << res << endl;
	}
}