#include<stdio.h>
#include<stdlib.h>
//array reverse
void main()
{
	int size,j,temp;
	scanf("%d",&size);
	int a[100000];
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	int start,end;
	start=0;
	end=size-1;
	while(start<=end)
	{
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		start=start+1;
		end=end-1;


	}
	printf("Reverse Array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
}