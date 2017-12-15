#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int solve(int *arr,int i,int n){
	if(i>=n) return 0;

	int ans=10000;
	for(int j=1;j<=arr[i];j++){
		ans=min(ans,1+solve(arr,i+j,n));
	}
	return ans;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		cout<<solve(arr,0,n)<<endl;
	}
	return 0;
}
