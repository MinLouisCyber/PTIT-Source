#include<bits/stdc++.h>
using namespace std;
void bubble_sort()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	for(int i = 0; i < n - 1; i++)
	{
		bool check = 1;
		for(int j = 0; j < n - i -1; j++)
		{
			if(a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				check = 0;
			}
		}
		if(check) break;
		cout << "Buoc " << i+1 <<": ";
		for(int j = 0; j < n; j++)
		 cout << a[j] << " ";
		cout << endl;	
	}
	
}
int main()
{
	bubble_sort();
	
}