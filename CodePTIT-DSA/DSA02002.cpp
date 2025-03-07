#include<bits/stdc++.h>
using namespace std;

void Try(vector<int> a, int n)
{
	if(n < 1) {
		return;
	}
	vector<int> v;
	for(int i = 0; i < n - 1; i++) {
		v.push_back(a[i] + a[i + 1]);
	}
	Try(v, n - 1);
  cout << "[";
	for(int i = 0; i < n; i++) {
		if(i > 0) {
			cout << " ";
		}
		cout << a[i];
	}
	cout << "] ";

}
int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
    cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		Try(a, n);
    cout << endl;
	}
}