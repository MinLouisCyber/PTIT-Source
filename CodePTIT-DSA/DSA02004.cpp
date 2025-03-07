#include<bits/stdc++.h>
using namespace std;

int n, a[20][20];
vector<string> v;
bool visited[100][100];

void Try(int i, int j, string s)
{
	if(i >= n || j >= n || i < 0 || j < 0 || a[i][j] == 0 || visited[i][j]) {
		return;
	}

	if(i == n - 1 && j == n - 1) {
		v.push_back(s);
	}

	visited[i][j] = 1;

	Try(i + 1, j, s + "D");
	Try(i, j + 1, s + "R");
	Try(i - 1, j, s + "U");
	Try(i, j - 1, s + "L");

	visited[i][j] = 0;
}


int main()
{
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
    v.clear();
    memset(visited, false, sizeof(visited));
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		Try(0, 0, "");
		if(v.empty()) {
			cout << "-1" << endl;
		} else {
			sort(v.begin(), v.end());
			for(auto x : v) {
				cout << x << " ";
			}
		}
		cout << endl;
	}
}