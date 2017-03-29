#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool in(int *arr,int n,int x){
	for(int i=0;i<n;i++){
		if(arr[i]==x) return 1;
	}
	return 0;
}
int main(int argc, char const *argv[]) {
	int b1,q,l,m;
	cin>>b1>>q>>l>>m;
	int a[m];
	for(int i=0;i<m;i++) cin>>a[i];
	if(q==0){
		if(in(a,m,0)){if(b1==0)cout<<0;else cout<<1;return 0;}
		else cout<<"inf";return 0;
	}
	if(q==1){
		if(in(a,m,b1)) {cout<<0;return 0;}
		else cout<<"inf";return 0;
	}
	int cnt=m;
	for(int i=0;i<m;i++){
		if(a[i]%b1==0 && a[i]%q==0 &&a[i]<=l){
			if((a[i]/b1)%b1!=0) cnt--;
		}
	}
	cout<<cnt;
	return 0;
}
