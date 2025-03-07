#include<bits/stdc++.h>
using namespace std;

int n;
int a[1001], check[100];

bool checker()
{
	for(int i = 1; i < n; i++) {
		if(abs(a[i] - a[i + 1]) == 1) {
			return 0;
		}
	}
	return 1;
}
void Try(int i)
{
	for(int j = 1; j <= n; j++) {
		if(!check[j]) {
			a[i] = j;
			check[j] = 1;
			if(i == n) {
				if(checker()) {

					for(int i = 1; i <= n; i++) {
						cout << a[i];
					}
					cout << endl;
				}

			} else {
				Try(i + 1);
			}
			check[j] = 0;
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		Try(1);
	}
}