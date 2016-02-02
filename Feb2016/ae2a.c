//http://www.spoj.com/problems/AE2A/
#include <stdio.h>
#define max 1e+6;
long long int n,k;
int dp[max][max];
void init(){
	for(int i=0;i<max;i++){
		for(int j=0;j<max;j++) dp[i][j]=0;
	}
}
int calc(long long int i,long long int pip){
	if(i==n){
		if(pip==k) return 1;
		else return 0;
	}
	return calc(i+1,pip+1)+calc(i+1,pip+2)+calc(i+1,pip+3)+calc(i+1,pip+4)+calc(i+1,pip+5)+calc(i+1,pip+6);
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%lld %lld",&n,&k);
		printf("%d\n",calc(0,0));
	}
	return 0;
}