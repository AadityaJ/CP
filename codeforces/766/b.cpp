#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=n-1;i>=2;i--){
		if(arr[i]<arr[i-1]+arr[i-2]){cout<<"YES";return 0;}
	}
	cout<<"NO";
	return 0;
}
