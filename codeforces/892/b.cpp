#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	int arr[n];
	bool isdead[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		isdead[i]=0;
	}
	for(int i=n-1;i>=0;i--){
		int x=arr[i];
		for(int j=0;j<x;j++){
//			if(isdead[i-j-1]){break;}
			isdead[i-j-1]=1;
		}
	}
	int ans=0;
	for(int i=0;i<n;i++) ans+=(!isdead[i]);
	cout<<ans<<endl;
	return 0;
}
