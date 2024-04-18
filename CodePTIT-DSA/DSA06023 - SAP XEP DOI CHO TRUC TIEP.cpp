#include<bits/stdc++.h>
using namespace std;
void testcase()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i] >  a[j])
			{
				swap(a[i], a[j]);
			}
		}
	cout << "Buoc " + to_string(i + 1) + ": ";
	for(int i=0; i<n; i++)
	{
		cout << a[i] <<" ";
	}
	cout << endl;
    }
	
}
int main()
{
	testcase();
	cout << endl;
	return 0;
}