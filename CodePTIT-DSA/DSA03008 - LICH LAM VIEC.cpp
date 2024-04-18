#include<bits/stdc++.h>
using namespace std;

int n;
struct data{
	int fi, se;
};
data h[10001];
bool cmp(data a, data b){
	return a.se < b.se;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i=0; i<n; i++)
		 cin >> h[i].fi;
		for(int i=0; i<n; i++)
		 cin >> h[i].se;
		sort(h, h+n, cmp);
		int dem=1, i=0;
		for(int j=1; j<n; j++)
		{
			if(h[j].fi >= h[i].se)
			{
				dem++;
				i=j;
			}
		}
		cout << dem << endl;
	}
	return 0;
}