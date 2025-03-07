#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		int ans = 0;
		int a[1001];
		cin >> n >> k;
		map<int, int> mp;
		for(int i = 1; i <= k; i++) {
			cin >> a[i];
			mp[a[i]]++;
		}
		bool ok = false;
		for(int i = k; i >= 1; i--) {
			if(a[i] < n - k + i) {
				a[i]++;
				for(int j = i + 1; j <= k; j++) {
					a[j] = a[j - 1] + 1;
				}
				break;
			} else {
				if(i == 1)
         ok = true;
			}
		}
		if(ok) {
			ans = k;
		} else {
			for(int i = 1; i <= k; i++) {
				if(mp[a[i]] == 0)
					ans++;
			}

		}
		cout << ans << endl;

	}
}