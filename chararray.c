#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char a[100];
	gets(a);
	for(int i=0;a[i]!='\0';i++)
	{
		printf("%d : %c\n",i,a[i]);
	}
}

