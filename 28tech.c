#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>
void sx(char a[][50], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(strcmp(a[i], a[j])>0)
			{
				char tmp[100];
				strcpy(tmp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], tmp);
			}
		}
	}
}
int cmp(const void *a, const void *b)
{
	char *x=(char*)a;
	char *y=(char*)b;
	if(strcmp(x, y)<0)
	 return -1;
	return 1;
}
int main()
{
	char c[101];
	gets(c);
	char a[20][50];
	int n=0;
	char *token=strtok(c, " ");
	while(token != NULL)
	{
		strcpy(a[n], token);
		++n;
		token=strtok(NULL, " ");	
	}
	qsort(a, n, sizeof(a[0]), cmp);
	for(int i=0; i<n; i++)
	 printf("%s ", a[i]);
	
}