#include <bits/stdc++.h>
using namespace std;

int n;
string s, b;
vector<bool> check;

void Try(int i)
{
  for (int j = 0; j < n; j++)
  {
    if (!check[j])
    {
      b[i] = s[j];
      check[j] = true;
      if (i == n - 1)
        cout << b << " ";
      else
        Try(i + 1);
      check[j] = false;
    }
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    cin >> s;
    n = s.length();
    b.assign(n, ' ');
    check.assign(n, false);

    Try(0);
    cout << endl;
  }
  return 0;
}
