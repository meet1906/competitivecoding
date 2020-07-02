#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int n;
	scanf("%d",&n);
/* If you want all the factors of a number - 100 ho toh 1 2 4 5 10 20 25 50 100 type ->	 for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d ",i);
		}
	} */
//Now for taking out prime factors
	int i;
//for all even	
	while(n%2==0)
	{
		printf("2\t");
		n = n/2;
	}
//for all odd
	for(i=3;i<sqrt(n);i=i+2)
	{
		while(n%i==0)
		{
			printf("\t%d",i);
			n=n/i;
		}
	}
//if num itself is a prime
	if(n>2)
		printf(" %d",n);



			
}
