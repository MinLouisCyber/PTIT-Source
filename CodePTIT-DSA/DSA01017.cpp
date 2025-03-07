#include <iostream>
#include <string>

using namespace std;

char solve(char a, char b) {
    return (a == b) ? '0' : '1';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string x(s.length(), ' ');

        x[0] = s[0];
        for (size_t i = 1; i < s.length(); i++) {
            x[i] = solve(s[i], s[i - 1]);
        }

        cout << x << endl;
    }
    return 0;
}
