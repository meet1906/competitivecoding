#include<stdio.h>
#include<stdlib.h>
//Equilibrium Index lhs sum = rhs sum
// if i is index then 0 to i-1 ka sum == i+1 to size ka sum
//This is O(n^2)
void main()
{
	int size,sumr,suml,flag=0;
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
		suml=0;
		for(j=0;j<=i-1;j++)
		{
			suml=suml+a[j];
		}
		sumr=0;
		for(j=i+1;j<size;j++)
		{
			sumr=sumr+a[j];
		}
		if(sumr==suml)
		{
			printf("Equilibrium Index is %d\n",i);
			flag=1;
			exit(0);
		}

	}
	if(flag==0)
		printf("Not possible for this array\n");
}