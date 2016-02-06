//http://www.spoj.com/problems/CPCRC1C/
#include <stdio.h>
#define num 1000000000
int sum_digits[num];
long long int calc_dgit_sum(long long int n){
	long long int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main(int argc, char const *argv[])
{
	long long int a,b;
	while(1){
		scanf("%lld %lld",&a,&b);
		if(a==-1 && b==-1) break;
		for(long long int i=1;i<=b;i++) sum_digits[i]=sum_digits[i-1]+calc_dgit_sum(i);
		printf("%d\n",(sum_digits[b]-sum_digits[a]+1));
	}
	return 0;
}