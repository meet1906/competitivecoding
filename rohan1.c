#include<stdio.h>
#include<stdlib.h>
void main()
{
	long long int N;
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&N);
		if(N==1 || N%2==0)
			printf("A\n");
		else
			printf("B\n");
	}

}

char solve(long long N)
{
	if(N==1 || N%2==0)
	{
		return 'A';
	}
	else
	{
		return 'B';
	
	}

}