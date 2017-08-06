#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool checkAllZ(int *v,int n){
	for(int i=0;i<n;i++){
		if(v[i]!=0) return 1;
	}
	return 0;
}
int sumC(int *v,int n){
	int sm=0;
	for(int i=0;i<n;i++){
		sm+=v[i];
	}
	return sm;
}
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
		int v[d];
		int posS[d];
		for(int i=0;i<d;i++){
			v[i]=0;
			posS[i]=0;
		}
		for(int i=0;i<n;i++){
			v[i%d]+=val[i];
			if(val[i]>0) posS[i%d]+=val[i];
		}
		if(checkAllZ(v,d)) cout<<"-1\n";
		else cout<<sumC(posS,d)<<endl;
	}
	 return 0;
}
