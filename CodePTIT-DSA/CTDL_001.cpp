#include<bits/stdc++.h>
using namespace std;

int n, ok;
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
    cout << x[i] << " ";
  }
  cout << endl;
}

bool check()
{
  for(int i = 1; i <= n / 2; i++){
    if(x[i] != x[n - i + 1])
     return 0;
  }
  return 1;
}
int main()
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