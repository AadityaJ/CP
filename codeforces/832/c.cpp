#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int mod(int a,int b){
	int x=(a%b);
	if(x==0) return b;
	return x;
}
bool check(int *arr,int n,int k){
	for(int i=1;i<=n;i++){
		if(abs(arr[i]-i)<k) return 0;
	}
	return 1;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n+1];
		for(int i=1;i<=n;i++){
			arr[i]=mod(k+i,n);
		}
		if(!check(arr,n,k)) cout<<"-1\n";
		else{
			for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
			cout<<endl;
		}
	}
	return 0;
}
