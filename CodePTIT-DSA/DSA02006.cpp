#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[1001], x[1001];
vector<int> v;
vector<vector<int>> result;
bool ok;

bool check()
{
	int sum = 0;
	for(int i = 1; i <= n; i++) {
		sum += a[i] * x[i];
	}

	return sum == k;
}

void solve()
{
	v.clear();
	for(int i = 1; i <= n; i++) {
		if(x[i]) {
			v.push_back(a[i]);
		}
	}
	sort(v.begin(), v.end());
	result.push_back(v);
}

void printResult()
{
	sort(result.begin(), result.end());
	for (auto subset : result) {
		cout << "[";
		for (int i = 0; i < subset.size(); i++) {
			if (i > 0) {
				cout << " ";
			}
			cout << subset[i];
		}
		cout << "] ";
	}
}


void Try(int i)
{
	for(int j = 0; j <= 1; j++) {
		x[i] = j;
		if(i == n) {
			if(check()) {
				solve();
				ok = true;
			}
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
    result.clear();
		ok = false;
		cin >> n >> k;
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		Try(1);
		printResult();
		if(!ok) {
			cout << "-1";
		}
		cout << endl;
	}
}