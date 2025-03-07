#include<bits/stdc++.h>
using namespace std;

int n, ok, k;
int x[1000];

void ktao()
{
	for(int i = 1; i <= n; i++) {
		x[i] = 0;
	}
}

void sinh()
{
  int i = n;
  while(i >= 1 && x[i] == 1){
    x[i] = 0;
    i--;
  }
  if(i == 0)
  {
    ok = 0;
  }
  else{
    x[i] = 1;
  }
}

void in(){
  for(int i = 1; i <= n; i++)
  {
    cout << x[i];
  }
  cout << endl;
}

bool check()
{
  int cnt = 0;
  for(int i = 1; i <= n; i++)
  {
    if(x[i] == 1)
     cnt++;
  }
  if(cnt == k)
   return 1;
  else
   return 0;
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    cin >> n >> k;
    ktao();
    ok = 1;
    while(ok){
      if(check())
      {
        in();
      }
      sinh();
    }
  }
}