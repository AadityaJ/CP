#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	int arr[n+1];
	for(int i=1;i<=n;i++) cin>>arr[i];
	int sum=0;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		sum+=min(arr[x],arr[y]);
	}
	cout<<sum<<endl;
	return 0;
}
