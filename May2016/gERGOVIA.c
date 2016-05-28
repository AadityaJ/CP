//http://www.spoj.com/problems/GERGOVIA/
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	long long i,t,sum,d,a[100000];
	while(scanf("%lld",&t)==1)
	{
	if(t==0)    break;
	for(i=0;i<t;i++)
	    scanf("%lld",&a[i]);
	d=0;
	for(i=1;i<t;i++)
	    {
	    sum=a[i-1];
	    a[i]=a[i-1]+a[i];
	    if(sum<0)
	    sum=sum/-1;
	    d=d+sum;
	    }
	printf("%lld\n",d);
	}
	return 0;
}
