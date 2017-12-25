#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		map<string,int> mp;
		string a;
		int n;
		cin>>n;
		if(n==0){cout<<"Draw\n";continue;}
		for(int i=0;i<n;i++){
			cin>>a;
			mp[a]++;
		}
		if(mp.size()==1){
			cout<<a<<endl;continue;
		}
		map<string,int>::iterator it;
		pair<string,int> res[2];
		it=mp.begin();
		res[0].first=it->first;
		res[0].second=it->second;
		it++;
		res[1].first=it->first;
		res[1].second=it->second;
		if(res[0].second==res[1].second){
			cout<<"Draw\n";
		}else if(res[0].second>res[1].second){
			cout<<res[0].first<<endl;
		}else{
			cout<<res[1].first<<endl;
		}

	}
	return 0;
}
