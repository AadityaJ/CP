//http://www.spoj.com/problems/TEMPTISL/
#include <stdio.h>
int n,b;
int arr[100];
int dp[100][100];
void init(){
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++)
			dp[i][j]=-100;
	}
}
int comp(int a,int k){
	if(dp[a][k]!=-100) return dp[a][k];
	if(k==0){
		if(a==b) return 1;
		else return 0;
	}
	//printf("%d %d %d\n",b,a,k);
	if(a==1) return dp[arr[n]][k-1]+dp[arr[2]][k-1];	
	return dp[a][k]=dp[arr[(a-1)%n]][k-1]+dp[arr[(a+1)%n]][k-1];
}
int main(int argc, char const *argv[])
{
	int k,a;
	while(1){
		init();
		scanf("%d %d",&n,&k);
		for(int i=1;i<=n;i++) arr[i]=i;
		if(n==(-1) && k==-1) break;	
		scanf("%d %d",&a,&b);
		printf("%d\n",comp(a,k));
	}
	return 0;
}