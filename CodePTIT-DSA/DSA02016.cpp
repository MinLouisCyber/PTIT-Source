#include<bits/stdc++.h>
using namespace std;

int n, ans;
int a[20], b[20], c[20];

void Try(int i)
{
  for(int j = 1; j <= n; j++)
  {
    if(!a[j] && !b[i + j - 1] && !c[i - j + n])
    {
      a[j] = b[i + j - 1] = c[i - j + n] = 1;
      if(i == n)
       ans++;
      else
       Try(i + 1);
      a[j] = b[i + j - 1] = c[i - j + n] = 0;
    }
  }
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    cin >> n;
    ans = 0;
    Try(1);
    cout << ans << endl;
  }
}