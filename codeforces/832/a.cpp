#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MOD 1000000007
using namespace std;
int dp[101][101];
void init(){
	for(int i=0;i<101;i++){
		for(int j=0;j<101;j++) dp[i][j]=-1;
	}
}

int f(int n,int m){
	/*if(i>=n || j>=m) return 0;
	if(i==n-1 && j==m-1) return 1;
	if(dp[i][j]!=-1) return dp[i][j];
	return dp[i][j]=(f(i+1,j,n,m)+f(i,j+1,n,m))%MOD;*/
	int dp[n][m];
	for(int i=0;i<n;i++) dp[i][0]=1;
	for(int i=0;i<m;i++) dp[0][i]=1;
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			dp[i][j]=(dp[i-1][j]+dp[i][j-1])%MOD;
		}
	}
	return dp[n-1][m-1];

}
int main(){
	int t;
	cin>>t;
	while(t--){
		//init();
		int n,m;
		cin>>n>>m;
		cout<<f(n,m)<<endl;
	}
	return 0;
}
