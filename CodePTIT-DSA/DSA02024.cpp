#include<bits/stdc++.h>
using namespace std;

int n, a[22], x[50];
vector<string> v;

void solve(int i)
{
  string s = "";
  for(int j = 1; j <= i; j++)
  {
    s += to_string(a[x[j]]) + " ";
  }
  s.pop_back();
  v.push_back(s);
}


void Try(int i, int bd){
  for(int j = bd; j <= n; j++)
  {
    if(a[j] > a[x[i - 1]])
    {
      x[i] = j;
      if(i >= 2)
      {
        solve(i);
      }
      Try(i + 1, j + 1);
    }
  }
}


int main()
{
  cin >> n;
  for(int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  Try(1, 1);
  sort(v.begin(), v.end());
  for(auto x : v) cout << x << endl;

}