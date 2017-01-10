#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
long long f(long long c,long long d){
	if(c<(2*d)) return 4*d;
	else return 4*(c-d);
}
long long mx(long long c,long long d){
	return 4*(c+d);
}
int main(int argc, char const *argv[]) {
	long long int t;
	cin>>t;
	while(t--){
		long long c,d,l;
		cin>>c>>d>>l;
		if(l%4!=0){cout<<"no\n";continue;}
		if(l<f(c,d))cout<<"no\n";
		else if(l>mx(c,d))cout<<"no\n";
		else cout<<"yes\n";
	}
	 return 0;
}
