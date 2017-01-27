#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 30010
using namespace std;
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++) cin>>arr[i];
	int res[n+1];
	for(int i=1;i<=n;i++) res[i]=1;
	for(int i=1;i<=n;i++){
		int temp=i;
		while(arr[temp]!=-1){
			res[i]++;
			temp=arr[temp];
		}
	}
	int mx=0;
	for(int i=1;i<=n;i++) if(mx<res[i])mx=res[i];
	cout<<mx;
	return 0;
}
