#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=1;i<n;i++){
			if(arr[i]==-1){
				if(arr[i-1]!=-1){
					arr[i]=(arr[i-1]+1)%m;
					if(arr[i]<0) arr[i]=arr[i]+m;
				}
			}
		}
		for(int i=n-2;i>=0;i--){
			if(arr[i]==-1){
				if(arr[i+1]!=-1){
					arr[i]=(arr[i+1]-1)%m;
					if(arr[i]<0) arr[i]=arr[i]+m;
				}
			}
		}
		for(int i=0;i<n;i++) cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
