#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[105];
    for(int i=0; i<n; i++)
        cin >> a[i];
    int key, j;
    for(int i=0; i<n; i++) {
        key= a[i];
        j=i-1;
        while(j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        cout << "Buoc " << i << ": ";
        for(int j=0; j<=i; j++)
            cout << a[j] << " ";
        cout << endl;
    }
}
int main()
{
    solve();
}