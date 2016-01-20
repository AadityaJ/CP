//www.spoj.com/problems/SCUBADIV/
#include <stdio.h>
int max(int a,int b){
	return (a<b)?b:a;
}
int dp[25][80][1001];
void init(){
	for(int i=0;i<25;i++){
		for(int j=0;j<80;j++){
			for(int k=0;k<1001;k++)
				dp[i][j][k]=-1;
		}
	}
}
int knp(int wo,int wn,int wt[][2],int val[],int n){
	if(dp[wo][wn][n]!=-1) return dp[wo][wn][n]; 
	if(n==0 || (wo<=0 && wn<=0)) dp[wo][wn][n]=0;
	if(wo<wt[n-1][0] && wn<wt[n-1][1]) dp[wo][wn][n]=knp(wo,wn,wt,val,n-1);
	else dp[wo][wn][n]=max(val[n-1]+knp(wo-wt[n-1][0],wn-wt[n-1][1],wt,val,n-1),knp(wo,wn,wt,val,n-1));
	return dp[wo][wn][n];
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int wo,wn,wt[1001][2],val[1001];
		int n;
		scanf("%d %d",&wo,&wn);
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d %d",&wt[i][0],&wt[i][1]);
			scanf("%d",&val[i]);
		}
		int res=knp(wo,wn,wt,val,n);
		printf("%d\n",res);
	}
	return 0;
}