#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		bool x[8]={0};
		int curr=1;
		int i=0,j=n-1;
		bool is=1;
		while(i<=j){
			if(arr[i]>=8 || arr[i]<=0){is=0;break;}
			if(arr[j]>=8 || arr[j]<=0){is=0;break;}
			if(arr[i]!=arr[j]){is=0;break;}
			x[arr[i]]=1;
			if(arr[i]>(curr+1)){is=0;break;}
			if(arr[i]==curr+1){curr++;}
			i++;
			j--;
		}
		for(int i=1;i<=7;i++){
			if(!x[i]){is=0;break;}
		}
		if(is) cout<<"yes\n";
		else cout<<"no\n";
	}
	 return 0;
}
