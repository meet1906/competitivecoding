#include<stdio.h>
#include<stdlib.h>
//Equilibrium Index lhs sum = rhs sum
// if i is index then 0 to i-1 ka sum == i+1 to size ka sum
//This is O(n)
void main()
{
	int size,suml=0,sum=0,flag=0;
	scanf("%d",&size);
	int a[100000];
	int i,j;
	//int high,low,range;
	//scanf("%d",&high);
	//scanf("%d",&low);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	for(i=0;i<size;i++)
	{
		sum=sum-a[i];
		if(sum==suml)
		{
			printf("Equilibrium Index is %d\n",i);
			flag=1;
			exit(0);
		}
		suml=suml+a[i];
	}
	if(flag==0)
		printf("Not possible for this array\n");
}