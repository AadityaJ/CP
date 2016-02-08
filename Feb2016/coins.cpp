//http://www.spoj.com/problems/COINS/
#include <stdio.h>
#include <map>
using namespace std;
long long int max(long long int a,long long int b){
	return (a>b)?a:b;
}
map <long long int,long long int> dp;
long long int funct(long long int a){
	if(!a) return 0;
	if(dp[a]!=0) return dp[a];
	return dp[a]=max(a,funct(a/2)+funct(a/3)+funct(a/4));
}
int main(int argc, char const *argv[])
{
	long long int a;
	while(scanf("%lld",&a)==1) {
		printf("%lld\n",funct(a));
	}
	return 0;
}