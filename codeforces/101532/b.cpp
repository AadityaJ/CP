#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int tot=0;
		bool arr[n][m];
		for(int i=0;i<n;i++){
			char ch;
			for(int j=0;j<m;j++) {cin>>ch;
				arr[i][j]=ch-'0';
				if(ch=='1') tot++;
			}
		}
		/*for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cout<<arr[i][j]<<" ";
			cout<<endl;
		}*/
		//cout<<tot<<endl;
		int numx=(2*m)+(2*n)-4;
		//cout<<numx<<endl;
		if(tot<numx){cout<<"-1\n";continue;}
		int a=0;
		for(int i=0;i<n;i++){
			a+=arr[i][0];
		}
		for(int i=0;i<n;i++){
			a+=arr[i][m-1];
		}
		for(int i=1;i<m-1;i++){
			a+=arr[0][i];
		}
		for(int i=1;i<m-1;i++){
			a+=arr[n-1][i];
		}
		//cout<<"a: "<<a<<endl;
		cout<<(numx-a)<<endl;
	}
	return 0;
}
