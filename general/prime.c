#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	int i,j,flag=0;
	scanf("%d",&n);
	if(n<2)
	{
		printf("Not a prime number");
	}
	else
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				flag = 1;
				break;
			}
		}
	}
	if(flag==0)
	{
		printf("PRIME NUMBER");
	}
	else
	{
		printf("COMPOSITE NUMBER");
	}
}
		
	
