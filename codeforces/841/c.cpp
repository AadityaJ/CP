#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	sort(a,a+n,std::greater<int>());
	sort(b,b+n);
	map<int,int> mp;
	for(int i=0;i<n;i++){
		//cout<<b[i]<<" "<<a[i]<<endl;
		mp[b[i]]=a[i];
	}
	for(int i=0;i<n;i++){
		cout<<mp[b[i]]<<" ";
	}
	return 0;
}
