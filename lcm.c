#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int gcd(int a, int b)
{
	if(a==0)
		return b;
	else
		return gcd(b%a,a);
}
void main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	c = gcd(a,b);
	int lcm;
	lcm = (a*b)/c;
	printf("HCF : %d \n LCM : %d",c,lcm);
}
	
