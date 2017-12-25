#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[4]={0},x;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x%4) a[x%4]++;
		}
		if((a[1]+(2*a[2])+(3*a[3]))%4!=0){cout<<"-1\n";continue;}
		int ans=min(a[1],a[3]);
		a[1]-=ans;
		a[3]-=ans;
		ans+=(a[2]/2);
		a[2]%=2;
		if(a[2]){
			ans+=2;
			a[2]=0;
			if(a[3]){
				a[3]-=2;
			}
			if(a[1]){
				a[1]-=2;
			}
		}
		if(a[3]){
			ans+=(a[3]/4)*3;
		}
		if(a[1]){
			ans+=(a[1]/4)*3;
		}
		cout<<ans<<endl;
	}
	return 0;
}
