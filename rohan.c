#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	long long int a,b,n,c,d,t,lim;
	lim = pow(10,9);
	printf("Enter number of testcases:\n");
	scanf("%lld",&t);
	for(int j=0;j<t;j++)
	{
		printf("Enter a:\n");
		scanf("%lld",&a);
		printf("Enter b:\n");
		scanf("%lld",&b);
		printf("Enter n:\n");
		scanf("%lld",&n);
	//printf("\n%lld,%lld\n",a,b);
		for(int i=2;i<=n;i++)
		{
			d=(b+a)%(lim);
			c=(abs(b-a))%(lim);
		//printf("\n%lld,%lld\n",c,d);
			b=d;
			a=c;
		}
		//c = c%(10000000000);
		//d = d%(100000000000);

		printf("%lld %lld\n",c,d);
	}
}