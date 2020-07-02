#include<stdio.h>
#include<stdlib.h>
//Using recursive
int gcd(int a,int b)
{
	if(a==0)
		return b;
	else 
		return gcd(b%a,a);
}
void main()
{
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	int c = gcd(num1,num2);
	printf("HCF/GCD IS %d",c);
	
}

	

