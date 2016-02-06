//http://www.spoj.com/problems/CPCRC1C/
#include <stdio.h>
int sum_digits[100];
int calc_dgit_sum(long long int n){
	int sum=0;
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
		scanf("%d %d",&a,&b);
		for(int i=1;i<=b;i++) sum_digits[i]=sum_digits[i-1]+calc_dgit_sum(i);
		printf("%d\n",(sum_digits[b]-sum_digits[a]));
	}
	return 0;
}