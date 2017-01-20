#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int arr[101][101];
int main(int argc, char const *argv[]) {
	int n,m;
	long long int k;
	int x,y;
	cin>>n>>m>>k>>x>>y;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) arr[i][j]=0;
	}
	int x_1=1,y_1=1;
	for(int i=0;i<k;i++){
		arr[x_1][y_1]++;
		x_1++;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
