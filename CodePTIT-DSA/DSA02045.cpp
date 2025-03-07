#include<bits/stdc++.h>
using namespace std;

string a;

void Try(int start, string s)
{
  if(!s.empty()) cout << s << " ";

  for(int i = start; i < a.size(); i++)
  {
    Try(i + 1, s + a[i]);
  }
}

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n >> a;
    Try(0, "");
    cout << endl;
  }
}