#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,key,flag=0;
	//SEE YOU DONT NEED FLAG WHY HAVE INCREASE SPACE COMPLEXITY
	printf("ENter n");	
	scanf("%d",&n);
	printf("enter array details\n");
	int a[1000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter key:\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			flag=1;
			printf("Key found at %d",i+1);
			break;
		}
		
	}
	if(flag==0)
	{
		printf("Key not found");
	}
	
}	
				
