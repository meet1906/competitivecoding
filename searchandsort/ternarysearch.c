#include<stdlib.h>
#include<stdio.h>
void main()
{
	int i,key,n,pos,flag=0;
	scanf("%d",&n);
	int a[1000];
	//a = (int*)(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	int mid1;
	int mid2;
	int low;
	int high;
	low = 0;
	high = n-1;
	while(low<=high)
	{
		mid1 = low + (high - low)/3;
		mid2 = high - (high - low)/3;
		if(a[mid1]==key)
		{
			printf("Key that is %d is found at %d position\n",key,mid1);
			exit(0);
		}
		if(a[mid2]==key)
		{
			printf("Key that is %d is found at %d position\n",key,mid2);
			exit(0);
		}
		if(key<a[mid1])
		{
			high = mid1-1;
		}
		else if(key>a[mid2])
		{
			low = mid2+1;
		}
		else
		{
			low = mid1+1;
			high = mid2-1;
		}

	}
	printf("Not found\n");

}