#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) {cin>>b[i];a[i]%=b[i];}
		long long int ans=0,mx=0;
		for(int i=0;i<n;i++){
			if(a[i]+b[i]>mx){mx=(a[i]+b[i]);}
		}
		//cout<<mx<<" ";
		for(int i=0;i<n;i++){
			ans=((mx-a[i])%b[i])+ans;
		}
		cout<<ans<<endl;
	}
	return 0;
}
