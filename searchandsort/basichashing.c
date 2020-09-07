#include<stdlib.h>
#include<stdio.h>
void main()
{
	int i,key,n,pos,flag=0;
	scanf("%d",&n);
	int a[1000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int count[n+1];
	for(i=0;i<n;i++)
	{
		count[i]=0;
	}
	for(i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",count[i]);
	}
}
