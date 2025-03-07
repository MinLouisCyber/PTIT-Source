#include<bits/stdc++.h>
using namespace std;

int n, k, ok;
char a[1001];

void ktao()
{
  for(int i = 1; i <= n; i++)
  {
    a[i] = 'A';
  }
}

void sinh()
{
  int i = n;
  while(i >= 1 && a[i] == 'B')
  {
    a[i] = 'A';
    i--;
  }
  if(i == 0)
   ok = 0;
  else
   a[i] = 'B';
}

void in()
{
  for(int i = 1; i <= n; i++)
  {
    cout << a[i];
  }
  cout << endl;
}

bool check()
{
  int dem = 0, count = 0;
  for(int i = 1; i <= n; i++)
  {
    if(a[i] == 'A')
    {
      dem++;
      if(dem >= k)
       count++;
    }
    else
    {
      dem = 0;
    }
  }
  return (count == 1);
}
int main()
{
  cin >> n >> k;
  ok = 1;
  int res = 0;
  ktao();
  while(ok)
  {
    if(check())
    {
      res++;
    }
    sinh();
  }
  cout << res << endl;
  ok = 1;
  ktao();
  while(ok)
  {
    if(check())
    {
      in();
    }
    sinh();
  }


}