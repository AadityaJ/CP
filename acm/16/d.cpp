#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		int x[n];
		for(int i=0;i<n;i++) x[i]=1;
		int run_sum=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				if(arr[i]%arr[j]==0){
					x[i]+=x[j];
				}
			}
			run_sum+=x[i];
		}
		cout<<run_sum<<endl;
	}
	return 0;
}
