#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
	int size,t,i,j,k,max,result;
	//int idiff,udiff;
	scanf("%d",&t);
	int a[20000];
	int diff[2000];
	int count[]={0};
	for(i=0;i<t;i++)
	{
		scanf("%d",&size);
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i]);
		}
		//idiff = a[1]-a[0];
		for(k=0;k<size;k++)
		{
			diff[k]=abs(a[k+1]-a[k]);
			//udiff = a[k+1]-a[k];
			//if(udiff==idiff)
			//	count++;
		}
		for (int m = 0; m< size; m++)
		{
			count[diff[i]%2000] += 2000;
		} 
         
		max = diff[0], result = 0; 
    	for (j= 1; j< size; j++) 
   		{ 
        	if (count[j] > max) 
        	{ 
            	max = count[j]; 
            	result = j; 
        	} 
    	} 
    	printf("Case #%d: %d\n",t+1,result);

	}

}