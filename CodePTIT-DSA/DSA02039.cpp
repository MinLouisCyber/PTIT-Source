#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> res;

void Try(int limit, int remain, vector<int> v)
{
    if (remain == 0)
    {
        res.push_back(v);
        return;
    }
    for (int i = limit; i >= 1; i--)
    {
        if (remain - i >= 0)
        {
            v.push_back(i);
            Try(i, remain - i, v);
            v.pop_back();
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        res.clear();
        Try(n, n, {});

        cout << res.size() << endl;
        for (auto v : res)
        {
            cout << "(";
            for (int i = 0; i < v.size(); i++)
            {
                if (i > 0) cout << " ";
                cout << v[i];
            }
            cout << ") ";
        }
        cout << endl;
    }
}
