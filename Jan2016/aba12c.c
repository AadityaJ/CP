//http://www.spoj.com/problems/ABA12C/
#include <stdio.h>
#define max 1e+6;
int k;
int arr[105];
int min(int a,int b){
	return (a<b)?a:b;
}
int calc(int i,int cost,int weight)
{
	if(weight > k) 	return max;
	if(weight ==  k) return cost;
	int mi=0;
	for(int j=1;j<=k;j++){
		if(arr[j]==-1) continue;
		int x = min(calc(i+1,cost+arr[i],i+j),calc(i+1,cost,i));
		if(mi > x) mi = x; 
	}
	return mi;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d %d",&n,&k);
		for(int i=1;i<=k;i++) scanf("%d",&arr[i]);
		int res = calc(0,0,0);
		printf("%d\n",res);		
	}
	return 0;
}