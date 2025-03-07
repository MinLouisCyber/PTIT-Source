#include<bits/stdc++.h>
using namespace std;

int n, ok;
int a[1001];

void ktao()
{
  for(int i = 1; i <= n; i++)
  {
    a[i] = 6;
  }
}

void sinh()
{
  int i = n;
  while(i >= 1 && a[i] == 8)
  {
    a[i] = 6;
    i--;
  }
  if(i == 0)
   ok = 0;
  else
   a[i] = 8;
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
  if(a[1] != 8 || a[n] != 6)
    return 0;

  int dem8 = 0, dem6 = 0;
  for(int i = 1; i <= n; i++)
  {
    if(a[i] == 8)
    {
      dem6 = 0;
      dem8++;
      if(dem8 > 1)
        return 0;
    }
    else
    {
      dem8 = 0;
      dem6++;
      if(dem6 > 3)
       return 0;
    }
  }
  return 1;
}
int main()
{
  cin >> n;
  ok = 1;
  ktao();
  while(ok)
  {
    if(check())
     in();
    sinh();
  }

}