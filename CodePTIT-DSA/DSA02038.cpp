#include<bits/stdc++.h>
using namespace std;

int n, k, a[1001], tmp[1001];

void solve()
{
	for(int i = 1; i <= k; i++) {
		cout << a[tmp[i]] << " ";
	}
  	cout << endl;
}
void Try(int i)
{
	for(int j = tmp[i - 1] + 1; j <= n - k + i; j++) {
		tmp[i] = j;
		if(i == k) {
			solve();
		} else {
			Try(i + 1);
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		sort(a + 1, a + n + 1);
		Try(1);
	}
}