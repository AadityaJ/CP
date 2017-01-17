//http://codeforces.com/problemset/problem/601/A
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int total=0;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		total+=(arr[x-1]<arr[y-1])?arr[x-1]:arr[y-1];
		cout<<i<<" "<<total<<endl;
	}
	cout<<total;
	return 0;
}
/*
1)Think simple.
2)Its all about killing edges: hence greedy approach is worth inhabiting.
*/
