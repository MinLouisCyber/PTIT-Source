#include<bits/stdc++.h>
using namespace std;


int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n, s = 0;
    cin >> n;
    int a[101];
    for(int i = 0; i < n; i++)
    {
      cin >> a[i];
      s += a[i];
    }
    if(s % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}