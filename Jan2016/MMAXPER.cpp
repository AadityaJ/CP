//http://www.spoj.com/problems/MMAXPER/en/
// dp approach
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>    
using namespace std;
int arr[1004][2];
int dp[1004];
int n;   //size
void init(int n){
	for(int i=0;i<=n;i++){
		dp[i]=0;
	}
}
int max(int a,int b,int c=0,int d=0){
	int m=0;
	if(a>m)m=a;
	if(b>m)m=b;
	if(c>m)m=c;
	if(d>m)m=d;
	return m;
}
int calc(int i){
	if(dp[i]) return dp[i];
	if(i==n-1) return dp[i]=max(arr[i][0]+abs(arr[i-1][1]-arr[i][1]),arr[i][0]+abs(arr[i-1][0]-arr[i][1]),arr[i][1]+abs(arr[i-1][0]-arr[i][0]),arr[i][1]+abs(arr[i-1][1]-arr[i][0]));
	if(i==0) return dp[i]=max(arr[i][0],arr[i][1])+calc(i+1);
	return dp[i]=max(arr[i][0]+abs(arr[i-1][1]-arr[i][1]),arr[i][0]+abs(arr[i-1][0]-arr[i][1]),arr[i][1]+abs(arr[i-1][0]-arr[i][0]),arr[i][1]+abs(arr[i-1][1]-arr[i][0]))+calc(i+1);
}
int main(int argc, char const *argv[])
{	
	scanf("%d",&n);
	init(n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i][0]);
		scanf("%d",&arr[i][1]);
	}
	int ans=calc(0);
	printf("%d\n",ans);
	return 0;
}