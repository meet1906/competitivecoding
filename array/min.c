#include<stdio.h>
#include<stdlib.h>
void main()
{	
	int a[10000],i,min,loc;
	int size;
	scanf("%d",&size);
	if(size<=0)
	{
		printf("Not possible\n");
		exit(0);

	}	
	else
	{
		for(i=0;i<size;i++)
		{
			scanf("%d",&a[i]);
		}
		min=a[0];
		loc=0;
		for(i=0;i<size;i++)
		{
			if(a[i]<min)
			{
				min = a[i];
				loc = i;
			}
		}
		printf("Minimum element is %d and is located at %d \n",min,loc);
	}

}