#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[1001];
vector<string> tmp;

void solve()
{
  for(int i = 1; i <= k; i++)
  {
    cout << tmp[a[i]] << " ";
  }
  cout << endl;
}

void Try(int i)
{
  for(int j = a[i - 1] + 1; j <= n - k + i; j++)
  {
    a[i] = j;
    if(i == k) solve();
    else Try(i + 1);
  }

}


int main()
{
  cin >> n >> k;
  set<string> st;
  for(int i = 0; i < n; i++)
  {
    string s; cin >> s;
    st.insert(s);
  }
  tmp.push_back("");
  for(auto x : st)
  {
    tmp.push_back(x);
  }

  n = tmp.size() - 1;
  Try(1);


}