#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	long long n,m;
	cin>>n>>m;
	int a=max(n,m);
	int b=n+m-a;
	int x=0;
	for(int i=1;i<=b;i++){
		x+=((a+i)/5)-(i/5);
	}
	cout<<x;
	return 0;
}
