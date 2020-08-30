#include<stdlib.h>
#include<stdio.h>
void main()
{
	int a=10;
	int *p=&a;
	printf("%d\n%d\n%d\n",a,p,*p);
	int *q;
	q = (int*)(5*sizeof(int));
	
}