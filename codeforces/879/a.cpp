#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool ap(int a,int d,int an){
	return (an-a)%d==0;
}
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	int s[n],d[n];
	for(int i=0;i<n;i++){
		cin>>s[i]>>d[i];
	}
	int ans=1;
	for(int i=0;i<n;i++){
		int val=(s[i]-(ans%d[i]))%d[i];
		if(val<0) val+=d[i];
		ans+=val;
		cout<<ans<<endl;
		ans++;
	}
	ans--;
	cout<<ans<<endl;
	return 0;
}
