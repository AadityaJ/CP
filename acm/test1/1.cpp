#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<int,int> mp;
		int ans=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(mp[x]!=0) ans++;
			mp[x]++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
