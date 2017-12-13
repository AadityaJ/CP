#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool comp(pair<int,int> f,pair<int,int> s){
	if(f.second==s.second){
		return f.first>s.first;
	}
	return f.second<s.second;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		pair<int,int> arr[2*n];
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			arr[i]=make_pair(1,x);
		}
		for(int i=n;i<(2*n);i++){
			int x;
			cin>>x;
			arr[i]=make_pair(2,x);
		}
		sort(arr,arr+(2*n),comp);
		//for(int i=0;i<(2*n);i++) cout<<arr[i].first<<" "<<arr[i].second<<endl;
		int mx=0,curr=0;
		for(int i=0;i<(2*n);i++){
			if(arr[i].first==1) curr++;
			else curr--;
			mx=max(mx,curr);
		}
		cout<<mx<<endl;
	}
	return 0;
}
