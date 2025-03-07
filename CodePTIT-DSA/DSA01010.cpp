#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n, k, ans = 0;
    cin >> n >> k;
    int a[10001];
    map<int, int> mp;
    for(int i = 1; i <= k; i++)
    {
      cin >> a[i];
      mp[a[i]]++;

    }
    bool ok = false;
    int i = k;
    while(i >= 1 && a[i] == n - k + i)
    {
      i--;
    }
    if(i == 0)
     ok = true;
    else
    {
      a[i]++;
      for(int j = i + 1; j <= k; j++)
      {
        a[j] = a[j - 1] + 1;
      }
    }
    if(ok)
    {
      ans = k;
    }
    else
    {
      for(int i = 1; i <= k; i++)
      {
        if(mp[a[i]] == 0)
         ans++;
      }
    }
    cout << ans << endl;
  }
}