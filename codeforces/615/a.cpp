#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	bool isbulbs[m+1];
	for(int i=1;i<=m;i++) isbulbs[i]=0;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a;
		for(int j=0;j<a;j++){cin>>b;isbulbs[b]=1;}
	}
	bool flg=1;
	for(int i=1;i<=m;i++){
		if(isbulbs[i]==0){flg=0;break;}
	}
	if(flg) cout<<"YES";
	else cout<<"NO";
	return 0;
}
