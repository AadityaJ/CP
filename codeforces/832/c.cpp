#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a<b && a<c){cout<<"First\n";}
		if(b<a && b<c){cout<<"Second\n";}
		if(c<a && c<b){cout<<"Third\n";}
	}
	return 0;
}
