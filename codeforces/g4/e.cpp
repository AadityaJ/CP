#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	int pv=-1,hi=n-1,lo=0;
	while(hi>lo){
		int mid=(hi+lo)/2;
		if(arr[mid]>arr[mid+1]){pv=mid;break;}
		else if(arr[mid-1]>arr[mid]){pv=mid-1;break;}
		else if(arr[mid]>arr[lo]){lo=mid+1;}
		else {hi=mid-1;}
	}
	//cout<<pv<<endl;
	
	return 0;
}
