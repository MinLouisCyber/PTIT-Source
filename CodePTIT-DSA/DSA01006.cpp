#include<bits/stdc++.h>
using namespace std;

int n, ok;
int a[1000];

void ktao()
{
  for(int i = 1; i <= n; i++)
  {
    a[i] = n - i + 1;
  }
}

void sinh()
{
  int i = n - 1;
  while(i >= 1 && a[i] < a[i + 1])
  {
    i--;
  }
  if(i == 0)
  {
    ok = 0;
  }
  else
  {
    int j = n;
    while(a[i] < a[j]) j--;
    swap(a[i], a[j]);
    reverse(a + i + 1, a + n + 1);
  }
}

void in()
{
  for(int i = 1; i <= n; i++)
  {
    cout << a[i];
  }
  cout << " ";
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    cin >> n;
    ok = 1;
    ktao();
    while(ok)
    {
      in();
      sinh();
    }
    cout << endl;
  }
}