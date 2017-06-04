#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#define MX 501
using namespace std;
int dp[MX][MX],G[MX][MX];
bool f[MX];
int ans[MX];
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int a;
			cin>>a;
			G[i][j]=a;
			dp[i][j]=G[i][j];
		}
	}
	/*
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<G[i][j]<<" ";
		}
		cout<<endl;
	}*/
	int x=n;
	stack<int> s;
	for(int i=0;i<x;i++){
		int a;
		cin>>a;
		s.push(a);
	}
	for(int k_=0;k_<x;k_--){
		int k=s.top();
		s.pop();
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if (dp[i][k] + dp[k][j] < dp[i][j])
			        dp[i][j] = dp[i][k] + dp[k][j];
				if(f[i]&&f[j])
					ans[k_]+=dp[i][j];
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
