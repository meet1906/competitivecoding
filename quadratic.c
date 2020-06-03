#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int a,b,c,d,m1,m2;
	printf("ENTER a\n:");
	scanf("%d",&a);
	printf("ENTER b\n:");
	scanf("%d",&b);
	printf("ENTER c\n:");
	scanf("%d",&c);
	d = (b*b) - (4*a*c);
	printf("\n The discrimant is: %d\n",d);
	if(d>0)
	{
		m1 = (-1*b)/(2*a);
		m2 = (sqrt(d))/(2*a);
		printf("X1 = %d\n",m1+m2);
		printf("X2 = %d\n",m1-m2);
	}
	if(d==0)
	{
		m1 = (-1*b)/(2*a);
		//m2 = (sqrt(d))/(2*a);
		printf("X1 = %d\n",m1);
		printf("X2 = %d\n",m1);
	}
	else
	{
		m1 = (-1*b)/(2*a);
		m2 = (sqrt(-1*d))/(2*a);
		printf("X1 = %d+i%d\n",m1,m2);
		printf("X2 = %d-i%d\n",m1,m2);
	}
}
