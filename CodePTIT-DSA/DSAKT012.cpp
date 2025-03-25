#include<bits/stdc++.h>
using namespace std;

int n, s, ans;
int a[30];

void Try(int index, int value, int count)
{
  if(index == n || value >= s || count > ans)
  {
    if(value == s)
    {
      ans = min(ans, count);
    }
    return;
  }
  Try(index + 1, value, count);
  Try(index + 1, value + a[index], count + 1);
}

int main()
{
  cin >> n >> s;
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  ans = INT_MAX;
  Try(0, 0, 0);
  cout << (ans != INT_MAX ? ans : -1);
}