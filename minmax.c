#include<stdio.h>
void main()
{
	int i,n,temp,j;
	scanf("%d",&n);
	int a[1000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d",a[i]);
	}
	for(i=1;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
	
