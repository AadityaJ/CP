#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	long long n,m;
	cin>>n>>m;
	long long int a=max(n,m);
	long long int b=n+m-a;
	long long int x=0;
	for(long long int i=1;i<=b;i++){
		x+=((a+i)/5)-(i/5);
	}
	cout<<x;
	return 0;
}
