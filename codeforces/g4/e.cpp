#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MX 200
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int mp[MX]={};
		for(int i=0;i<n;i++){
			cin>>arr[i];
			mp[arr[i]]++;
		}
		for(int i=200;i>0;i--){
			for(int j=0;j<MX;j++){
				if(mp[j]==i){
					for(int x=0;x<i;x++) cout<<j<<" ";
				}
			}
		}
		cout<<endl;
	}

	return 0;
}
