#include<bits/stdc++.h>
using namespace std;

int n, ok;
int a[1001];

void ktao()
{
  vector<int> v(n);
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  for(int i = 0; i < v.size(); i++)
  {
    a[i + 1] = v[i];
  }
}

void sinh()
{
  int i = n;
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

void in()
{
  for(int i = 1; i <= n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}
int main()
{
  cin >> n;
  ok = 1;
  ktao();
  while(ok)
  {
    in();
    sinh();
  }
}