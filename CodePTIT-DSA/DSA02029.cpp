#include<bits/stdc++.h>
using namespace std;

 void thapHN(int n, char A, char B, char C)
{
  if(n == 1){
    cout << A << " -> " << C << endl;
    return;
  }
  thapHN(n - 1, A, C, B);
  cout << A << " -> " << C << endl;
  thapHN(n - 1, B, A, C);
}
int main()
{
  int n;
  cin >> n;
  thapHN(n, 'A', 'B', 'C');
}