//find the no of digits in a number
// Optimal is using log func
#include<stdio.h>
#include<math.h>
void main()
{
	int k,n;
	scanf("%d",&n);
	k = (log(n)/log(10))+ 1;
	printf("%d",k);
}

