#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,len,max,key;
	printf("Enter max size:\n");
	scanf("%d",&max);
	int a[max];
	printf("Enter length of array:\n");
	scanf("%d",&len);
	printf("Enter array elements:\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}		
	if(len<max)
	{
		printf("Enter key:\n");
		scanf("%d",&key);
		//If insert is to happen at the end
		a[len]=key;
		
		for(i=0;i<=len;i++)
		{
			printf("%d\n",a[i]);
		}
	}
	else
	{
		printf("MAX SIZE\n");
	}
}
