#include<bits/stdc++.h>
using namespace std;

int n;
int a[1001], check[101];
vector<string> v;

bool checker()
{
  string s = "";
  for(int i = 1; i <= n; i++)
  {
    s += char(a[i] + 'A' - 1);
  }
  for(int i = 1; i < s.length() - 1; i++)
  {
    if(s[i] == 'A' || s[i] == 'E')
    {
      if(s[i - 1] != 'A' && s[i - 1] != 'E' && s[i + 1] != 'A' && s[i + 1] != 'E')
       return false;
    }
  }
  return true;
}
void Try(int i)
{
  for(int j = 1; j <= n; j++)
  {
    if(!check[j])
    {
      a[i] = j;
      check[j] = 1;
      if(i == n){
        if(checker())
        {
          for(int t = 1; t <= n; t++)
          {
            cout << char(a[t] + 'A' - 1);
          }
          cout << endl;
        }
      }
      else
       Try(i + 1);
      check[j] = 0;
    }
  }
}
int main()
{
  char c;
  cin >> c;
  n = c - 'A' + 1;
  Try(1);
}