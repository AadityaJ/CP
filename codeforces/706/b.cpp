#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int binaryX(int *arr,int n,int ele){
	int hi=n-1;
	int lo=0;
	int mid;
	while(lo<hi){
		mid=lo+((hi-lo)/2);
		if(arr[mid]==ele) return mid;
		else if(arr[mid]>ele){
			hi=mid;
		}
		else lo=mid;
	}
	return mid;
}
/*int linX(int *arr,int n,long long int ele){
	int x=n;
	for(;x>=0&&arr[x]>ele;x--);
	return ++x;
}*/
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	int x[n];
	for(int i=0;i<n;i++) cin>>x[i];
	sort(x,x+n);
	int q;
	cin>>q;
	while(q--){
		long long int m;
		cin>>m;
		cout<<binaryX(x,n,m)<<endl;
	}
	return 0;
}
