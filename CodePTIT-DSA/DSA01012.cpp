#include<bits/stdc++.h>
using namespace std;


string toBinary(int num, int n)
{
	string binary = "";
	for(int i = n - 1; i >= 0; i--) {
		binary += (num & 1 << i) ? '1' : '0';
	}
	return binary;
}


vector<string> generateGrayCode(int n)
{
	vector<string> grayCodes;
	int total = 1 << n;
	for(int i = 0; i < total; i++) {
		int gray = i ^ (i >> 1);
		grayCodes.push_back(toBinary(gray, n));
	}

	return grayCodes;
}
int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<string> grayCodes = generateGrayCode(n);
		for (const string &code : grayCodes) {
			cout << code << " ";
		}
    cout << endl;

	}
}