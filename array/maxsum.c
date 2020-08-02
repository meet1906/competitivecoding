#include<stdio.h>
#include<stdlib.h>
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
	int sum,maxsum=0;
	for(i=0;i<size;i++)
	{
		sum=0;
		count=0;
		for(j=i;count<k;j++)
		{
			sum=sum+a[j];
			count++;
		}
		printf("%d\n",sum);
		if(sum>maxsum)
			maxsum=sum;

	}
	printf("maxsum is %d\n",maxsum);

}