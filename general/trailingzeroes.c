#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,fact=1,c=0;
	scanf("%d",&n);
	while(n>0)
	{
		fact=fact*n;
		n--;
	}
	printf("\n Factorial is :%d",fact);
	while(fact>0)
	{
		if(fact%10==0)
		{
			c++;
		}
	fact=fact/10;
	}
	printf("\n %d",c);
}
