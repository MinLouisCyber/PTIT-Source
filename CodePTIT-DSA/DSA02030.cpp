#include <bits/stdc++.h>
using namespace std;

char c;
int k;
int n;
int a[1001];

void Try(int i)
{
    for (int j = a[i - 1]; j < n; j++) {
        a[i] = j;
        if (i == k) {
            for (int t = 1; t <= k; t++) {
                cout << char(a[t] + 'A');
            }
            cout << endl;
        } else {
            Try(i + 1);
        }
    }
}

int main()
{
    cin >> c >> k;
    n = c - 'A' + 1;
    a[0] = 0;
    Try(1);
}
