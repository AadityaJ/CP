#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int getN(int *arr,int n,int k){
	int mod[k];
	for(int i=0;i<k;i++) mod[i]=0;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		mod[((sum%k)+k)%k]++;
	}
	int result=0;
	for(int i=0;i<k;i++){
		if(mod[i]>1){
			result+=(mod[i]*(mod[i]-1))/2;
		}
	}
	result+=mod[0];
	return result;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		cout<<getN(arr,n,k)<<endl;
	}
	return 0;
}
