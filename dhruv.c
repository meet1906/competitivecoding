#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int i,j,k,temp;
	int a[n+1];
	for(k=0;k<n;k++)
	{
		scanf("%d",&a[k]);
	}
	/*i=0;
	j=n-1;
	if(n%2!=0)
	{
		while(i<j)
		{
			printf("%d",a[j--]);
			printf("%d",a[i++]);
		}
		printf("%d",a[j]);
	}
	else
	{
		while(i<j)
		{
			printf("%d",a[j--]);
			printf("%d",a[i++]);
		}
		//printf("%d",a[j]);
	}*/
	for(j=0;j<n;j=j+2)
	{
		temp = a[n-1];
		for(i=n-1;i>j;i--)
		{
			a[i]=a[i-1];
		}
		a[i]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}



		
}
		
