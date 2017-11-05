#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MX 100001
using namespace std;
int main(int argc, char const *argv[]) {
	int n,k,m;
	cin>>n>>k>>m;
	vector<int> mp[MX];
	//for(int i=0;i<k;i++) mp[i]=0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		mp[(x%m)].push_back(x);
		//cout<<x<<"pushed to"<<(x%k)<<endl;
	}
	bool is=0;
	for(int i=0;i<m;i++){
		if(mp[i].size()>=k && !is){
			is=1;
			cout<<"Yes\n";
			for(int j=0;j<k;j++){
				cout<<mp[i][j]<<' ';
			}
		}
	}
	if(!is)cout<<"No\n";
	return 0;
}
