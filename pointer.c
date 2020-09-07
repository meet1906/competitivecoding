#include<stdlib.h>
#include<stdio.h>
void main()
{
	int a=5;
	int *p=&a;
	printf("%d\n%d\n%d\n",a,p,*p);
	int *q;
	q = (int*)(5*sizeof(int));
	for(i=0;i<a;i++)
		scanf("%d",&q[i]);
	
}