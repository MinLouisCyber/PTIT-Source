#include <bits/stdc++.h>
using namespace std;

int b[100], a[100] = {0}, n, k, check = 0, out = 0;

void Try(int i) {
    
    if (out == 1)
        return;
    for (int j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) {
            if (check == 1) {
                for (int q = 1; q <= k; q++) {
                    cout << a[q] << " ";
                }
                out = 1;
                check = 0;
                return;
            }
            check = 1;
            for (int q = 1; q <= k; q++)
                if (a[q] != b[q])
                    check = 0;
        }
        else 
            Try(i + 1);
    }
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        out = 0;
        int spec = 0;
        a[0] = 0;
        cin >> n >> k;
        for (int i = 1; i <= k; i++) {
            cin >> b[i];
            if (b[i] != n - k + i)
                spec = 1;
        }
        if (spec == 0)
            for (int i = 1; i <= k; i++)
                cout << i << " ";
        else
            Try(1);
        cout << endl;
    }
}