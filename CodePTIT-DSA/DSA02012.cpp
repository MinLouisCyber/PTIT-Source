#include<bits/stdc++.h>
using namespace std;

int dem(int n, int k)
{
  if(k == 0 || k == n) return 1;
  return dem(n - 1, k - 1) + dem(n - 1, k);
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int m, n;
    cin >> m >> n;
    vector<int> a(n * m);
    for(auto &x : a) cin >> x;
    cout << dem(n + m - 2, n - 1);
  }
}