#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	int pstsum[n];
	int s=0;
	for(int i=0;i<n;i++){
		s+=arr[i];
		pstsum[i]=s;
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int a;
		cin>>a;
		int x=(n/(a+1));
		if(n%(a+1)) x++;
		cout<<pstsum[x-1]<<endl;
	}
	return 0;
}
