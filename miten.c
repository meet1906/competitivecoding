#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n=100;
	int m=5;
	n = n+m/m*m-m+n;
	n = n>>m<<5;
	printf("%d\n",n);
}
