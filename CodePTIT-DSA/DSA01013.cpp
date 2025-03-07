#include<bits/stdc++.h>
using namespace std;

char result(char a, char b)
{
  if(a == b)
   return '0';
  else
   return '1';
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    string s;
    cin >> s;
    for(int i = 1; i < s.length(); i++)
    {
      s[i] = result(s[i], s[i - 1]);
    }
    cout << s << endl;
  }
}