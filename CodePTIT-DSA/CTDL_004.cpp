#include<bits/stdc++.h>
using namespace std;

int n, k, ok;
int x[1001], a[1001], result[1001];

void ktao()
{
  cin >> n >> k;
  for(int i = 1; i <= n; i++)
  {
    cin >> x[i];
  }
  for(int i = 1; i <= n; i++)
  {
    a[i] = 0;
  }
}

void sinh()
{
  int i = n;
  while(i >= 1 && a[i] == 1)
  {
    a[i] = 0;
    i--;
  }
  if(i == 0)
   ok = 0;
  else
   a[i] = 1;
}

bool check()
{
  int dem = 0;
  for(int i = 1; i <= n; i++)
  {
    if(a[i] == 1)
     dem++;
  }
  return dem == k;
}
void in()
{
  int cnt = 1;
  for(int i = 1; i <= n; i++)
  {
    if(a[i] == 1)
    {
      result[cnt++] = x[i];
    }
  }
}

bool check2()
{
  for(int i = 1; i < k; i++)
  {
    if(result[i] > result[i + 1])
     return 0;
  }
  return 1;
}

int main()
{
  ktao();
  ok = 1;
  int count = 0;
  while(ok)
  {
    if(check())
    {
      in();
      if(check2())
      {
        count++;
      }
    }
    sinh();
  }
  cout << count;
}