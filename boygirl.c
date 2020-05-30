#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j,temp,flag=1;
	scanf("%d",&n);
	int b[n],g[n];
	printf("Enter boys:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nEnter girls:");
	for(j=0;j<n;j++)
	{
		scanf("%d",&g[j]);
	}
	for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (b[i] > b[j]) 
                {
 
                    temp =  b[i];
                    b[i] = b[j];
                    b[j] = temp;
 
                }
 
            }
	}
	for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (g[i] > g[j]) 
                {
 
                    temp =  g[i];
                    g[i] = g[j];
                    g[j] = temp;
 
                }
 
            }
	}
	printf("\n boys:");
	for(i=0;i<n;i++)
	{
		printf("\n%d\n",b[i]);
	}
	printf("\n girls:");
	for(j=0;j<n;j++)
	{
		printf("\n%d\n",g[j]);
	}
	int c = 2*n;
	int k,l;
	int f[c];
	int x[c];
	i=0;
	j=0;
	k=0;
	l=0;
	printf("\nFinal sorted array:\n");
	while(i<n && j<n)
	{
		if(b[i]<=g[j])
		{
			f[k++]=b[i++];
			x[l++]=1;
		}
		else
		{
			f[k++]=g[j++];
			x[l++]=0;
		}
	}
	while(i<n)
	{
		f[k++]=b[i++];
		x[k++]=1;
	}
	
	while(j<n)
	{
		f[k++]=g[j++];
		x[k++]=0;
	}
	for(k=0;k<c;k++)
	{
		printf("\n%d\n",f[k]);	
	}
	printf("\nGender array:\n");
	for(k=0;k<c;k++)
	{
		printf("\n%d\n",x[k]);	
	}
	for(k=0;k<c-1;k++)
	{
		if(x[k]==x[k+1])
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
		printf("\n NO \n");
	else
		printf("\n YES \n");

}

