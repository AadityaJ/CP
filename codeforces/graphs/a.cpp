//http://codeforces.com/problemset/problem/115/A
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
	int mx=0;
	for(int i=1;i<=n;i++){
		int dpth=1,temp=i;
		while(arr[temp]!=-1){
			temp=arr[temp];
			dpth++;
		}
		if(mx<dpth){mx=dpth;}
		//cout<<dpth<<" ";
	}
	cout<<mx;
	//int mx=-1,mx_index=-1;
	//for(int i=1;i<=n;i++) if(depth[i]>mx) mx=depth[i];
	//cout<<mx;
	return 0;
}
