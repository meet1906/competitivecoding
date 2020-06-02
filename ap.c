#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,a,d,i;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter d:");
	scanf("%d",&d);
	printf("Enter n;");
	scanf("%d",&n);
	for(i=a;i<=n;i=i+d)
		printf("%d\n",i);
}
