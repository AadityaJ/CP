#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
long long int fact(int a){
	int prod=1;
	for(int i=1;i<=a;i++) prod*=i;
	return prod;
}
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	for(int index=1;index<=t;index++){
		long long int n,m;
		cin>>m>>n;
		long long int p=fact(m);
		p*=p;
		p*=(1+n-m);
		p/=fact((2*m)-n);
		cout<<"Case #"<<index<<": "<<p<<endl;
	}
	return 0;
}
