#include<bits/stdc++.h>
using namespace std;

int k, res;
string s;

void Try(int pos, int cnt)
{
  res = max(res, stoi(s));
  if(cnt == k) return;
  int n = s.length();
  for(int i = pos; i < n; i++)
  {
    for(int j = i + 1; j < n; j++)
    {
      if(s[i] < s[j])
      {
        swap(s[i], s[j]);
        Try(i, cnt + 1);
        swap(s[i], s[j]);
      }
    }
  }
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    cin >> k >> s;
    res = 0;
    Try(0, 0);
    cout << res << endl;
  }
}