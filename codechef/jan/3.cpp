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
		string tnk[n];
		for(int i=0;i<n;i++){
			cin>>tnk[i];
		}
		/*for(int i=0;i<n;i++){
			cout<<tnk[i];
			cout<<endl;
		}*/
		bool flg=0;
		for(int i=0;i<n-1;i++){

			for(int j=0;j<m;j++){
				if(tnk[i][j]=='B'&&tnk[i+1][j]=='A'){flg=1;break;}
			}
		}
		if(flg) cout<<"no\n";
		else cout<<"yes\n";
	}
	 return 0;
}
