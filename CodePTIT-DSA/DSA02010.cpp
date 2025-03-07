#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[101], x[101];
bool ok;

void print(int n){
  ok = true;
  cout << "[";
  for(int i = 1; i <= n; i++)
  {
    if(i > 1) cout << " ";
    cout << x[i];
  }
  cout << "]";
}


void Try(int i, int cnt, int sum)
{
  for(int j = cnt; j <= n; j++)
  {
    if(sum + a[j] > k)
     continue;
    x[i] = a[j];
    if(sum + a[j] == k){
      print(i);
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
    for(int i = 1; i <= n; i++)
    {
      cin >> a[i];
    }
    ok = false;
    Try(1, 1, 0);
    if(!ok){
      cout << "-1" << endl;
    }
    cout << endl;
  }
}