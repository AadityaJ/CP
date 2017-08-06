#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		int arr[n];
		int sx=0;
		for(int i=0;i<n;i++) {cin>>arr[i];sx+=arr[i];}
		if(sx%n){
			cout<<"-1\n";
			continue;
		}
		sx/=n;
		//cout<<sx<<endl;
		int val[n];
		for(int i=0;i<n;i++) val[i]=0;
		for(int i=0;i<n;i++){
			val[i]=(arr[i]-sx);
		}
		int res=0;
		bool is=1;
		for(int i=0;i<n-d;i++){
			if(val[i]!=0){
				val[i+d]+=val[i];
		//		if(val[i+d]+sx<0){is=0;break;}
				res+=abs(val[i]);
				val[i]=0;
			}
		}
		if(is){
			for(int i=0;i<n;i++){
				if(val[i]){is=0;break;}
			//cout<<val[i]<<" ";
			}
		}
		if(is==0){cout<<"-1\n";}
		else{
			cout<<res<<endl;
		}
	}
	 return 0;
}
