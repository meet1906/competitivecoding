#include<stdio.h>
#include<stdlib.h>
//this is sliding window so O(n) times
void main()
{
	int size;
	scanf("%d",&size);
	int a[100000];
	int i,count;
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	int k,j;
	scanf("%d",&k);
	if(k>size)
	{

		printf("Not possible\n");
		exit(0);
	}
	int window_sum=0;
	for(i=0;i<k;i++)
	{
		window_sum=window_sum+a[i];
		
	}
	int current_sum=window_sum;
	int max_sum=window_sum;
	for(i=k;i<size;i++)
	{
		current_sum+=a[i]-a[i-k];
		if(current_sum>max_sum)
		{
			max_sum=current_sum;
		}

	}
	printf("Max sum is %d\n",max_sum);
}

