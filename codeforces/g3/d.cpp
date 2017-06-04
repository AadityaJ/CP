#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MX 501
using namespace std;
int dp[MX][MX],G[MX][MX];
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int a;
			cin>>a;
			a=G[i][j];
			dp[i][j]=G[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;i<=n;j++) cout<<G[i][j]<<" ";
		cout<<endl;
	}
	/*for(int k=4;k>0;k--){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if (dp[i][k] + dp[k][j] < dp[i][j])
			        dp[i][j] = dp[i][k] + dp[k][j];
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;i<=n;j++) cout<<G[i][j]<<" ";
		cout<<endl;
	}*/
	return 0;
}
