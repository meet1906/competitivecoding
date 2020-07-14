#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,med,pos,temp,j;
	scanf("%d",&n);
	int a[n];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	if(n%2!=0)
	{
		pos = (n+1)/2;
		med = a[pos];
	}
	else
	{
		pos = n/2;
		med = (a[pos]+a[pos+1])/2;
	}
	printf("Median = %d",med);	
	
}
	
