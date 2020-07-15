#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,len,max,key,pos;
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
		/*If insert is to happen at the end
		a[len]=key;*/
		
		//insert at a given position
		printf("Enter position you want to enter");
		scanf("%d",&pos);

		/*if you use this then the elements gets overwritten with current pos val
		for(i=pos;i<=len;i++)
		{
		a[i+1]=a[i];
		}
		a[pos]=key;
		*/
		//instead start from last
		for(i=len-1;i>=pos;i--)
		{
			a[i+1]=a[i];
		}
		a[pos]=key;
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
