#include<stdio.h>
#include<math.h>
void ssc(int a[], int n)
{
	int res, j;
	for(int i=0; i<n; i++)
	{
		res=a[i];
		j=i-1;
		while(j >=0 && a[j] > res)
		{
			a[j+1]=a[j];
		    j--;
		}
		a[j+1] = res;
		printf("Buoc %d: ", i);
		for(j=0; j<=i; j++)
		 printf("%d ", a[j]);
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int a[105];
	for(int i=0; i<n; i++)
	 scanf("%d", &a[i]);
	ssc(a, n);
	return 0;
	
}