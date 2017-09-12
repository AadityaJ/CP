#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		cin>>p;
		//for(int i=0;i<n;i++) cout<<arr[i];
		int sum=arr[0];
		int c=arr[0];
		for(int i=0;i<(n-1);i++){
			int x=arr[i]-arr[i+1];
			c=c+x;
			if(c<0){sum+=(c*(-1));c=0;}
		}
		cout<<(sum*p)<<endl;
	}
	return 0;
}
