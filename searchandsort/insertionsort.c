#include<stdlib.h>
#include<stdio.h>
void main()
{
	int i,j,key,n,pos,flag=0;
	scanf("%d",&n);
	int a[1000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		key = a[i];
		j = i-1;
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}	
}
//O(n^2)