#include<bits/stdc++.h>
using namespace std;

int a[1001];

bool check()
{
  if(a[5] == 0)
   return 0;
  if(a[1] == 0 && a[2] == 0)
   return 0;
  if(a[3] == 0 && a[4] == 0 || a[3] == 2 && a[4] == 2 || a[3] == 2 && a[4] == 0)
   return 0;
  return 1;
}

void in()
{
  for(int i = 1; i <= 8; i++)
  {
    cout << a[i];
    if(i == 2 || i == 4) cout << "/";
  }
  cout << endl;
}
void Try(int i)
{
	for(int j = 0; j <= 2; j += 2) {
		a[i] = j;
		if(i == 8) {
		{
      if(check())
      {
        in();
      }
    }
		} else Try(i + 1);
		}
}
int main()
{
  Try(1);
}