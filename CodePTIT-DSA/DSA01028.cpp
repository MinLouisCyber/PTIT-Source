#include <bits/stdc++.h>
using namespace std;

int n, k, ok;
vector<int> elements;

void sinh(int res, vector<int> &a) {
    int i = k - 1;
    while (i >= 0 && a[i] == res - k + i) {
        i--;
    }
    if (i < 0) {
        ok = 0;
    } else {
        a[i]++;
        for (int j = i + 1; j < k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

void in(const vector<int> &a) {
    for (int i = 0; i < k; i++) {
        cout << elements[a[i]] << " ";
    }
    cout << endl;
}

int main() {
    cin >> n >> k;
    set<int> se;
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        se.insert(x[i]);
    }

    elements.assign(se.begin(), se.end());
    int res = elements.size();

    vector<int> a(k);
    for (int i = 0; i < k; i++) {
        a[i] = i;
    }

    ok = 1;
    while (ok) {
        in(a);
        sinh(res, a);
    }
}