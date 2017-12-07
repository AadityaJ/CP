#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MOD 1000000007
using namespace std;
bool diff(long long int a,long long int b){
	if(a%2==0 && b%2==0) return 0;
	if(a%2==1 && b%2==1) return 0;

	return 1;
}
long long pow(long long int a){
	if(a==1) return 2;

	if(a%2==0) return ((pow(a/2)%MOD)*(pow(a/2)%MOD))%MOD;

	else return (2*(pow(a/2)%MOD)*(pow(a/2)%MOD))%MOD;
}
int main(int argc, char const *argv[]) {
	long long int n,m,k;
	cin>>n>>m>>k;
	if(n==1|| m==1){cout<<"1\n";return 0;}
	if(k==-1 && diff(n,m) &&(n==1 || m==1)){cout<<"0\n";return 0;}
	cout<<(pow((n-1)*(m-1)%MOD))%MOD<<endl;
	return 0;
}
