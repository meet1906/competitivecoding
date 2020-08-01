#include<stdio.h>
#include<stdlib.h>
//array rotation optimise
void main()
{
	int size;
	scanf("%d",&size);
	int a[100000];
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	int k;
	scanf("%d",&k);
// Trying shift for k time
	int temp,j;
	temp = a[0];
	for(j=0;j<k;j++)
	{
		for(i=0;i<size;i++)
		{
			a[i]=a[i+1];
		}
		a[size-1]=temp;
		temp=a[0];
    }
	printf("\n Anti-CLockwise Rotated Array: \n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
}