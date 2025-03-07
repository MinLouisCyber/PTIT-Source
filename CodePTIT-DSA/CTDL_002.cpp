#include<bits/stdc++.h>
using namespace std;

int n, k, ok;
int a[1001], b[1001];
int cnt;

void ktao(){
  for(int i = 1; i <= n; i++)
  {
    b[i] = 0;
  }
}

void sinh(){
  int i = n;
  while(i >= 1 && b[i] == 1)
  {
    b[i] = 0;
    i--;
  }

  if(i == 0){
    ok = 0;
  }
  else{
    b[i] = 1;
  }
}

void solve()
{
  int sum = 0;
  for(int i = 1; i <= n; i++)
  {
    sum += a[i] * b[i];
  }

  if(sum == k)
  {
    cnt++;
    for(int i = 1; i <= n; i++){
      if(b[i]){
        cout << a[i] << " ";
      }
    }
    cout << endl;
  }
}

int main()
{
  cin >> n >> k;
  for(int i = 1; i <= n; i++){
    cin >> a[i];
  }
  ktao();
  ok = 1;
  while(ok){
    solve();
    sinh();
  }
   cout << cnt;

}