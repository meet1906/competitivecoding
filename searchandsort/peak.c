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
	int high,mid,low;
	high=n-1;
	low=0;
	while(low<=high)
	{
		mid = (high+low)/2;
		if((mid==0||a[mid-1]<=a[mid])&&(mid==n-1||a[mid+1]<=a[mid]))
		{
			printf("Key that is %d at position %d is the peak element\n",a[mid],mid);
			break;
		}
		else if(mid>0||a[mid-1]>a[mid])
		{
			high = mid-1;
		}
		else
		{
			low = mid+1;
		}
	}
}
