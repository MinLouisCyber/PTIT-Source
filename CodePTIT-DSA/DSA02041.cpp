#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> memo;

int minSteps(int n) {
    if (n == 1) return 0;
    if (memo[n] != -1) return memo[n];

    int result = INT_MAX;
    result = min(result, minSteps(n - 1) + 1);
    if (n % 2 == 0) result = min(result, minSteps(n / 2) + 1);
    if (n % 3 == 0) result = min(result, minSteps(n / 3) + 1);

    memo[n] = result;
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        memo.assign(N + 1, -1);
        cout << minSteps(N) << "\n";
    }

    return 0;
}