#include<bits/stdc++.h>
using namespace std;

void findPart(int n, int max_val, vector<int> &v)
{
  if(n == 0)
  {
    cout << "(";
    for(int i = 0; i < v.size(); i++)
    {
      if(i > 0) cout << " ";
      cout << v[i];
    }
    cout <<") ";
    return ;
  }

  for(int i = min(n, max_val); i >= 1; i--)
  {
    v.push_back(i);
    findPart(n - i, i, v);
    v.pop_back();
  }

}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    vector<int> v;
    findPart(n, n, v);
    cout << endl;

  }
}