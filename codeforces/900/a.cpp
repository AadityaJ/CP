#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int a,b,n;
	int ans_l=0,ans_r=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a>0) ans_r++;
		else ans_l++;
	}
	if(ans_r<=1 || ans_l<=1){
		cout<<"Yes";
	}else cout<<"No";
	return 0;
}
