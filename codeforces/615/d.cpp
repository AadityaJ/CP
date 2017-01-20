#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MOD 1000000007
using namespace std;
int main(int argc, char const *argv[]) {
	long long m,x;
	cin>>m;
	long long prod=1;
	for(long long i=0;i<m;i++){
		cin>>x;
		x=x%MOD;
		prod*=x;
		prod=prod%MOD;
	}//cout<<prod<<endl;
	long long count=1;
	for(long long i=1;i<=prod;i++){
		if(prod%i==0) {count*=i;count=count%MOD;}
	}
	cout<<count;
	return 0;
}
