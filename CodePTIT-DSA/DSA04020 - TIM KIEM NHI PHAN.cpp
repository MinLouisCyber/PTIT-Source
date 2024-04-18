#include<bits/stdc++.h>
using namespace  std;
void binary_search()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	int res = lower_bound(a.begin(), a.end(), k) - a.begin();
	if(res == n || a[res] != k)
	 cout << "NO";
	else
	 cout << res+1;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		binary_search();
		cout << endl;
	}
	return 0;
}