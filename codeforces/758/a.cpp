#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	int arr[n+1];
	int mx=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]>mx)mx=arr[i];
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=mx-arr[i];
	}
	cout<<sum;
	return 0;
}
