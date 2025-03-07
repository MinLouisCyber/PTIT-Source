#include<bits/stdc++.h>
using namespace std;

int n;
int a[101];
vector<int> v;
set<vector<int>> ss;

void Try(int i, int sum)
{
  for(int j = i; j < n; j++)
  {
    v.push_back(a[j]);
    sum += a[j];
    if(sum % 2 == 1){
      vector<int> ans(v.rbegin(), v.rend());
      ss.insert(ans);
    }
    if(j + 1 < n) Try(j + 1, sum);
    v.pop_back();
    sum -= a[j];
  }
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    cin >> n;
    v.clear();
    ss.clear();
    for(int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    sort(a, a + n);
    Try(0, 0);
    for(auto x : ss){
      for(auto i : x){
        cout << i << " ";
      }
      cout << endl;
    }
  }
}