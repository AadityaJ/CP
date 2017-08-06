#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool checkAllZ(long long int *v,int n){
	for(int i=0;i<n;i++){
		if(v[i]!=0) return 1;
	}
	return 0;
}
int f(std::vector<int> &v){
	long long int x=0;
	for(int i=0;i<v.size()-1;i++){
		v[i+1]+=v[i];
		x+=abs(v[i]);
		v[i]=0;
	}
	return x;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		int arr[n];
		long long int sx=0;
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
		long long int v[d];
		vector<int> levl[d];
		for(int i=0;i<d;i++){
			v[i]=0;
		}
		for(int i=0;i<n;i++){
			v[i%d]+=val[i];
			levl[i%d].push_back(val[i]);
		}
		for(int i=0;i<d;i++){
			cout<<i<<":: ";
			for(int j=0;j<levl[i].size();j++) cout<<levl[i][j]<<" ";
			cout<<endl;
		}
		if(checkAllZ(v,d)) cout<<"-1\n";
		else{
			long long int res=0;
			for(int i=0;i<d;i++){
				res+=f(levl[i]);
			}
			cout<<res<<endl;
		}
	}
	 return 0;
}
