#include<stdlib.h>
#include<stdio.h>
void main()
{
	int i,j,key,n,pos,flag=0,temp;
	scanf("%d",&n);
	int a[1000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		key = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[key])
				key = j;
		}
		temp=a[i];
		a[i]=a[key];
		a[key]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
//O(n^2)