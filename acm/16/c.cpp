#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ele;
		int p=0,n1=0,nz=0;
		for(int i=0;i<n;i++){
			cin>>ele;
			if(ele==1) p++;
			else if(ele==-1) n1++;
			else if(ele!=0) nz++;
		}
		if(nz>1){cout<<"no\n";continue;}
		if(nz>0 && n1>0){cout<<"no\n";continue;}
		if(n1>1 && p==0){cout<<"no\n";continue;}
		cout<<"yes\n";
	}
	return 0;
}
