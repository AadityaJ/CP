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

int f(int i,int j,int n,int m){
	if(i>=n || j>=m) return 0;
	if(i==n-1 && j==m-1) return 1;
	if(dp[i][j]!=-1) return dp[i][j];
	return dp[i][j]=(f(i+1,j,n,m)+f(i,j+1,n,m))%MOD;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		int n,m;
		cin>>n>>m;
		cout<<f(0,0,n,m)<<endl;
	}
	return 0;
}
