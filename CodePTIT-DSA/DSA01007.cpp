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
  while(i >= 1 && x[i] == 'B'){
    x[i] = 'A';
    i--;
  }
  if(i == 0)
  {
    ok = 0;
  }
  else{
    x[i] = 'B';
  }
}

void in(){
  for(int i = 1; i <= n; i++)
  {
    cout << x[i];
  }
  cout << " ";
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
      in();
      sinh();
    }
    cout << endl;
  }
}