#include<bits/stdc++.h>
using namespace std;

int n, k, ok;
char a[1001];

void ktao()
{
  for(int i = 1; i <= k; i++)
  {
    a[i] = 'A' + i - 1;
  }
}

void sinh()
{
  int i = k;
  while(i >= 1 && a[i] == 'A' + n - k + i - 1)
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

void in()
{
  for(int i = 1; i <= k; i++)
  {
    cout << a[i];
  }
  cout << endl;
}

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    cin >> n >> k;
    ktao();
    ok = 1;
    while(ok)
    {
      in();
      sinh();
    }
  }
}