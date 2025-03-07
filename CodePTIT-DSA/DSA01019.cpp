#include<bits/stdc++.h>
using namespace std;

int n, ok;
char x[1000];

void ktao()
{
	for(int i = 1; i <= n; i++) {
		x[i] = 'A';
	}
}

void sinh()
{
  int i = n;
  while(i >= 1 && x[i] == 'H'){
    x[i] = 'A';
    i--;
  }
  if(i == 0)
  {
    ok = 0;
  }
  else{
    x[i] = 'H';
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
  if(x[1] != 'H' || x[n] != 'A')
   return 0;
  for(int i = 1; i <= n - 1; i++)
  {
    if(x[i] == 'H' && x[i + 1] == 'H')
     return 0;
  }
  return 1;
}

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    cin >> n;
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