#include<stdio.h>
#include<stdlib.h>
int gcd(int m,int n)
{
	if(n==0)
		return m;
	return gcd(n,m%n);
}
void main()
{
	int size;
	scanf("%d",&size);
	int a[100000];
	//int b[100000];
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	int k;
	scanf("%d",&k);
	int c =gcd(size,k);
	printf("No of sets: %d\n",c);
	// Now you do just do one one rotation of this sets making space complexity o(1)
}
