#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
long long f(long long c,long long d){
	if(c<(2*d)) return 4*d;
	else return 4*d+(c-2*d)*4;
}
long long mx(long c,long d){
	return 4*(c+d);
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		long long int c,d,l;
		cin>>c>>d>>l;
		if(l%4!=0){cout<<"no\n";continue;}
		if(l>=f(c,d) && l<=mx(c,d)) cout<<"yes\n";
		else cout<<"no\n";
	}
	 return 0;
}
