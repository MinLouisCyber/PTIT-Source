#include<bits/stdc++.h>
using namespace std;

int n, p, s;
vector<int> e(201, 1);
vector<int> prime;
vector<vector<int>> res;


void sieve()
{
  e[0] = e[1] = 0;
  for(int i = 2; i * i <= 200; i++)
  {
    if(e[i])
    {
      for(int j = i * i ; j <= 200; j += i)
      {
        e[j] = 0;
      }
    }
  }

  for(int i = 2; i <= 200; i++)
  {
    if(e[i]){
      prime.push_back(i);
    }
  }
}

void Try(int pos, int sum, vector<int> list)
{
  if(list.size() == n)
  {
    if(sum == s) res.push_back(list);
    return;
  }
  for(int i = pos; i < prime.size(); i++)
  {
    if(sum + prime[i] <= s)
    {
      list.push_back(prime[i]);
      Try(i + 1, sum + prime[i], list);
      list.pop_back();
    }
    else return;
  }
}
int main()
{
  int t;
  cin >> t;
  sieve();
  while(t--)
  {
    res.clear();
    cin >> n >> p >> s;
    for(int i = 0; i < prime.size(); i++)
    {
      if(prime[i] > p){
        Try(i, 0, {});
        break;
      }
    }
    sort(res.begin(), res.end());
    cout << res.size() << endl;
    for(auto x : res)
    {
      for(auto i : x)
      {
        cout << i << " ";
      }
      cout << endl;
    }
  }
}