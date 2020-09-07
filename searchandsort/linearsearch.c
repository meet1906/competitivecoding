#include<stdlib.h>
#include<stdio.h>
void main()
{
	int i,key,n;
	scanf("%d",&n);
	int a[1000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("key that is %d is found at %d position\n",key,i+1);
			exit(0);
		}
	}
	printf("Key not found\n");

	

}