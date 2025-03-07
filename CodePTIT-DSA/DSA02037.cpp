#include<bits/stdc++.h>
using namespace std;

int n;
int a[1001];
vector<int> v;
set<vector<int>> se;

bool checkNT(int n){
  if(n < 2) return 0;
  for(int i = 2; i <= sqrt(n); i++)
  {
    if(n % i == 0)
     return 0;
  }
  return 1;
}
void Try(int i, int sum)
{
  for(int j = i; j < n; j++)
  {
    v.push_back(a[j]);
    sum += a[j];
    if(checkNT(sum))
    {
      vector<int> ans(v.rbegin(), v.rend());
      se.insert(ans);
    }
    if(i + 1 < n) Try(j + 1, sum);
    v.pop_back();
    sum -= a[j];
  }
}
int main()
{
	int t;
	cin >> t;
	while(t--) {
    v.clear();
    se.clear();
		cin >> n;
    for(int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    sort(a, a + n);
    Try(0, 0);
    for(auto i : se)
    {
      for(auto j : i)
      {
        cout << j << " ";
      }
      cout << endl;
    }
	}
}