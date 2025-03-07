#include<bits/stdc++.h>
using namespace std;

int n, ans;
string a[15], hv[15];
bool vs[15];

void Try(int i, int cout)
{
  if(i > n){
    ans = min(ans, cout);
    return;
  }
  for(int j = 1; j <= n; j++)
  {
    if(!vs[j]){
      vs[j] = true;
      hv[i] = a[j];

      int dd[127] = {};
      for(char c : hv[i]) dd[c]++;
      for(char c : hv[i - 1]) dd[c]++;

      int dem = 0;
      for(char i = 'A'; i <= 'Z'; i++){
        if(dd[i] == 2) dem++;
      }

      if(cout + dem < ans){
        Try(i + 1, cout + dem);
      }

      vs[j] = false;
    }
  }

}
int main()
{
  cin >> n;
  ans = INT_MAX;
  for(int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }

  Try(1, 0);
  cout << ans;


}