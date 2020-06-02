#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,a,r,n;
	printf("Enter a:");
	scanf("%d",&a);

	printf("Enter r:");
	scanf("%d",&r);

	printf("Enter n:");
	scanf("%d",&n);
	
	for(i=a;i<n;i=i*r)
		printf("%d",i);
}
