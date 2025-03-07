#include<bits/stdc++.h>
using namespace std;

int n, k, ok;
int a[1001], x[1001];

void ktao()
{
  for(int i = 1; i <= k; i++)
  {
    a[i] = i;
  }
}

void sinh()
{
  int i = k;
  while(i >= 1 && a[i] == n - k + i)
  {
    i--;
  }
  if(i == 0)
   ok = 0;
  else
  {
    a[i]++;
    for(int j = i + 1; j <= k; j++)
    {
      a[j] = a[j - 1] + 1;
    }
  }
}

bool check()
{
  for(int i = 1; i <= k; i++)
  {
    if(a[i] != x[i])
     return 0;
  }
  return 1;
}

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    cin >> n >> k;
    for(int i = 1; i <= k; i++)
    {
      cin >> x[i];
    }
    int ans = 1;
    ktao();
    ok = 1;
    while(ok)
    {
      if(check())
      {
        cout << ans;
        break;
      }
      sinh();
      ans++;
    }
    cout << endl;
  }
}