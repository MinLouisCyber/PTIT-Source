#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		long long val;
		int res=0;
		priority_queue <long long, vector<long long>, greater<long long >> V;
		cin >> n;
		for(int i=0; i<n; i++)
		{
			cin >> val;
			V.push(val);
		}
		while(V.size() > 1)
		{
			long long a=V.top(); V.pop();
			long long b=V.top(); V.pop();
			res += a + b;
			V.push(a+b);
		}
		cout << res << endl;
		
	}
}