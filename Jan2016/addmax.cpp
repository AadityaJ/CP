#include <stdio.h>
int n;
//int iter;
int dp[100][100];
void init(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) dp[i][j]=-1;
	}
}
int calc(int r,int c){
	//iter++;
	if(dp[r][c]!=-1) return dp[r][c];
	if(r<0 || r>=n) return 0;
	if(c<0 || c>=n) return 0;
	if(c==n-1 && r==n-1) return 1;
	return dp[r][c]=calc(r+1,c)+calc(r,c+1)+calc(r+1,c+1);//+calc(r-1,c)+calc(r,c-1);
}
int main(int argc, char const *argv[])
{	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
	//n=t;
	//n=3;
		//iter=0;
		n=i;
		printf("%d :: ",i);
		init(n);
		//printf("%d\n",t);
		printf("%d \n",calc(0,0));		
	}
	return 0;
}