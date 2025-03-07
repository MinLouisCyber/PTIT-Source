#include<bits/stdc++.h>
using namespace std;

int n, k, dem;
int a[1001], x[1001];
vector<vector<int>> result;

void solve(int n){
  vector<int> v;
  for(int i = 1; i <= n; i++)
  {
    v.push_back(x[i]);
  }
  result.push_back(v);
}

void Try(int i, int cnt, int sum)
{
  for(int j = cnt; j <= n; j++)
  {
    if(sum + a[j] > k)
     continue;
    x[i] = a[j];
    if(sum + a[j] == k){
      dem++;
      solve(i);
    }
    else{
      Try(i + 1, j, sum + a[j]);
    }
  }
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
      cin >> a[i];
    }
    dem = 0;
    result.clear();
    Try(1, 1, 0);
    if(dem == 0) cout << "-1";
    else
    {
      cout << dem << " ";
      for(auto x : result){
        cout << "{";
        for(int i = 0; i < x.size(); i++)
        {
          if(i > 0) cout << " ";
          cout << x[i];
        }
        cout << "}";
        cout << " ";
      }
    }
    cout << endl;
  }
}