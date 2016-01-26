//http://www.spoj.com/problems/PARTY/
#include <stdio.h>
int n;
int budget;
int arr[105][105];
int max(int a,int b){
	return (a>b)?a:b;
}
int dp(int i,int bound,int fun){
	if(i==n){
		if(bound<=budget) return fun;
		else return 0;
	}
	return max(dp(i+1,bound+arr[i][0],fun+arr[i][1]),dp(i+1,bound,fun));
} 
/*
	- Add memoisation to reduce iterations
	- How to return what is the "expenditure"

*/
int main(int argc, char const *argv[])
{	while(1){
		scanf("%d %d",&budget,&n);
		if(!budget && !n) break;
		for(int i=0;i<n;i++) scanf("%d %d",&arr[i][0],&arr[i][1]);
		printf("%d\n",dp(0,0,0));
	}
	return 0;
}
