#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    int a[1000];
    for(int i = 1; i <= n; i++)
    {
      cin >> a[i];
    }

    for(int i = n; i >= 1; i--)
    {
      if(a[i - 1] < a[i]){
        int j = n;
        while(a[i - 1] > a[j])
        {
          j--;
        }
        swap(a[i - 1], a[j]);
        reverse(a + i, a + n + 1);
        break;
      }
      else{
        a[i] = i;
      }
    }

    for(int i = 1; i <= n; i++)
    {
      cout << a[i] << " ";
    }
    cout << endl;
  }
}