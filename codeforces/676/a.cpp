#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++) cin>>arr[i];
//	for(int i=1;i<=n;i++) cout<<arr[i];
//	cout<<endl;
	int min_index,minval=10000,max_index,maxval=0;
	for(int i=1;i<=n;i++){
		if(arr[i]>maxval){max_index=i;maxval=arr[i];}
		if(arr[i]<minval){min_index=i;minval=arr[i];}
	}
//	cout<<minval<<" "<<maxval;
	cout<<max(max(min_index-1,max_index-1),max(n-min_index,n-max_index));
	return 0;
}
