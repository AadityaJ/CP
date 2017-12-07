#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	int arr[n];
	int mn=INT_MAX;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		mn=min(mn,arr[i]);
	}
	bool is=1;
	for(int i=0;i<n;i++){
		if(arr[i]%mn!=0){is=0;break;}
	}
	if(!is){
		cout<<"-1";return 0;
	}
	cout<<((2*n))<<endl;
	for(int i=0;i<n;i++){
		cout<<mn<<" "<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
