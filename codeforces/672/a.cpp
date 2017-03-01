#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n,lim;
		cin>>n>>lim;
		int arr[n];
		int min=INT_MAX;
		for(int i=0;i<n;i++) {cin>>arr[i];if(min>arr[i]) min=arr[i];}
		int x=lim-min;
		if(x<=0) cout<<0<<endl;
		else cout<<x<<endl;
	}
	return 0;
}
