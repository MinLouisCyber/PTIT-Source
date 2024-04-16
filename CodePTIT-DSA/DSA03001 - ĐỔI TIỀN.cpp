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
		int dem=0, res;
		int a[11]={1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
		for(int i=0; i<10; i++)
		{
			if(n >= a[i])
			{
				res = n/a[i];
				dem += res;
				n = n - a[i] * res;
			}
		}
		cout << dem << endl;
	}
}