#include<bits/stdc++.h>
using namespace std;
int n, a[100][100];
vector<string> cnt;
void tryy(int i, int j, string s)
{
	if(i >= n || j >= n)
     return;
    if(a[i][j] == 0)
     return;
    if(i == n - 1 && j == n - 1){
      cnt.push_back(s);
      return;
	}
	tryy(i + 1, j, s + "D");
	tryy(i, j + 1, s + "R");  
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				cin >> a[i][j];
			}
		}
		cnt.clear();
		tryy(0, 0, "");
		if(cnt.size() == 0)
		 cout<< -1 <<endl;
		else{
			for(auto c: cnt)
			 cout << c << " ";
			cout << endl;
		}
	}
}
