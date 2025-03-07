#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    int a[1001];
    multiset<int> mul;
    for(int i = 0; i < n; i++){
      cin >> a[i];
      mul.insert(a[i]);
    }
    for(auto x : mul) cout << x << " ";
    cout << endl;
  }
}