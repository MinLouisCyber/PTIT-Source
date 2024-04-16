#include<stdio.h>
long long sokgiam(long long n)
{
	int so, d=n%10;
	n=n/10;
	while(n>0)
	{
		so=n%10;
		if(d<so)
		 return 0;
		d=n%10;
		n=n/10;
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		if(sokgiam(n))
		 printf("YES\n");
		else
		 printf("NO\n");
	}
}