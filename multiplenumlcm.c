#include<stdio.h>
#include<stdlib.h>
long long int gcd(long long int a,long long int b)
{
    if(a==0)
    {
        return b;
    }
    else
    {
        return gcd(b%a,a);
    }
}
/*You are required to complete this method */
long long int getSmallestDivNum(long long n)
{
    long long int i;
  //  int T;
//    for(i=0;i<T;i++)
  //  {
        long long int ans=1;
        for(i=2;i<=n;i++)
        {
            ans = (i*(ans))/(gcd(i,ans));
        }
        
        return ans;
        
   // }
    //Your code here
}

void main()
{
	long long int n,r;
	scanf("%lld",&n);
	r = getSmallestDivNum(n);
	printf("%lld",r);
}
