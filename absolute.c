int sumUnderModulo(long long int a,long long int b)
{
    long long int M=1000000007;
   // long long int a;
	//long long int b;
	//long long int m;
	//scanf("%lld",&a);
	//scanf("%lld",&b);
	//m = 1000000007;
	long long int c;
	c = a%M;
	long long int d,e;
	d = b%M;
	e = (c+d)%M;
	return e;
	//printf("\n %lld",e);    
    //your code here
}
