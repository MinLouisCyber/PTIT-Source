#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int test;
        cin >> test;
        string s;
        cin >> s;

        int n = s.length();
        int i = n - 2;

        while (i >= 0 && s[i] >= s[i + 1])
            i--;

        if (i < 0) {
            cout << test << " " << "BIGGEST\n";
        } else {
            int j = n - 1;
            while (s[j] <= s[i])
                j--;
            swap(s[i], s[j]);
            reverse(s.begin() + i + 1, s.end());

            cout << test << " " << s << "\n";
        }
    }
}
