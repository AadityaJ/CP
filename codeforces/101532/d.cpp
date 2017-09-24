#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#define MX 200004
using namespace std;
int dp[MX];
void init(){
	for(int i=0;i<MX;i++) dp[i]=-1;
}
int nxt(int *arr,int i,int n,int ele){
	for(int d=i;d<n;d++){
		if(arr[d]==ele) return d;
	}
	return -1;
}
int f(int *arr,int i,int n){
	if(i==n-1) return 0;

	if(dp[i]!=-1) return dp[i];
	int x=nxt(arr,i+1,n,arr[i]);
	if(x==-1) return dp[i]=1+f(arr,i+1,n);
	else return dp[i]=1+min(f(arr,i+1,n),f(arr,x,n));
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		init();
		int n;
		cin>>n;
		queue<int> q[n];
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<f(arr,0,n)<<endl;
	}
	return 0;
}
