#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define N 1000000007
using namespace std;
long long floorSearch(long long int arr[], long long low, long long high, long long int x){
    if (low > high)
        return -1;
    if (x > arr[high])
        return high;
    int mid = (low+high)/2;
    if (arr[mid] == x)
        return mid;
    if (mid > 0 && arr[mid-1] <= x && x < arr[mid])
        return mid-1;
    if (x < arr[mid])
        return floorSearch(arr, low, mid-1, x);
    return floorSearch(arr, mid+1, high, x);
}

int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int arr[n],b[n];
		for(int i=0;i<n;i++) {cin>>arr[i];b[i]=arr[i];}
		sort(b,b+n);
		for(int i=0;i<n;i++){
			long long int x=floorSearch(b,0,n,N-arr[i]);
			if(x==-1) x=0;
			cout<<(b[x]+arr[i])%N<<" ";
		}
		cout<<endl;
	}
	return 0;
}
