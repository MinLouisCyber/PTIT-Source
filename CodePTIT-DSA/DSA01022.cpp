#include<bits/stdc++.h>
using namespace std;

int n, ok;
int a[1001], x[1001];

void ktao()
{
  for(int i = 1; i <= n; i++)
  {
    a[i] = i;
  }
}

void sinh()
{
  int i = n - 1;
  while(i >= 1 && a[i] > a[i + 1])
  {
    i--;
  }
  if(i == 0)
   ok = 0;
  else
  {
    int j = n;
    while(a[i] > a[j]) j--;
    swap(a[i], a[j]);
    reverse(a + i + 1, a + n + 1);
  }
}

bool check()
{
  for(int i = 1; i <= n; i++)
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
    cin >> n;
    for(int i = 1; i <= n; i++)
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