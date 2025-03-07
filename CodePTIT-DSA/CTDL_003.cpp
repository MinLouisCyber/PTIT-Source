#include<bits/stdc++.h>
using namespace std;

int x[1001], a[1001], c[1001];
int n, w;
int xopt[1001];
int fopt = 0;
int ok;

void ktao()
{
	for(int i = 1; i <= n; i++) {
		x[i] = 0;
	}
}
void init()
{
	cin >> n >> w;
	for(int i = 1; i <= n; i++) {
		cin >> c[i];
	}
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
}

void sinh()
{
	int i = n;
	while(i >= 1 && x[i] == 1) {
		x[i] = 0;
		i--;
	}
	if(i == 0)
		ok = 0;
	else
		x[i] = 1;
}

bool check_weight()
{
	int weight = 0;
	for(int i = 1; i <= n; i++) {
		weight += x[i] * a[i];
	}

	return weight <= w;
}

void sum_up()
{
	int sum = 0;
	for(int i = 1; i <= n; i++) {
		sum += x[i] * c[i];
	}
	if(fopt < sum) {
		fopt = sum;
		for(int i = 1; i <= n; i++) {
			xopt[i] = x[i];
		}
	}
}

void result()
{
	cout << fopt << endl;
	for(int i = 1; i <= n; i++) {
		cout << xopt[i] << " ";
	}
}
int main()
{
	ktao();
	ok = 1;
	init();
	while(ok) {
		if(check_weight()) {
			sum_up();
		}
		sinh();
	}
	result();
}