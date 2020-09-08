#include<stdlib.h>
#include<stdio.h>
void main()
{
	int i,key,n,pos,flag=0;
	scanf("%d",&n);
	int a[1000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	int high,low,mid;
	high = n-1;
	low = 0;
	while(low<=high)
	{
		mid = (high+low)/2;
		if(a[mid]==key)
		{
			printf("Element that is %d is found at %d position \n",key,mid);
			exit(0);
		}
		else if(a[mid]<key)
		{
			low = mid+1;
		}
		else
		{
			high = mid-1;
		}

	}
	printf("Not found\n");
}
//O(logn)