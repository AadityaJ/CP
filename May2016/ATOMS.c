//http://www.spoj.com/problems/ATOMS/
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		long long int n,k,m;
		scanf("%lld %lld %lld",&n,&k,&m);
		if(m<=n){
			printf("0\n"); continue;
		}
		float result = log(m/n)/log(k);
		printf("%d\n",(int)result);
	}
	return 0;
}